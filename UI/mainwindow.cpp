#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QCameraInfo>
#include <QDateTime>
#include "variables.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ReadSettings();
//    ui->push->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    camera=new HikVisonSDK();

    ChartsInit();
    InitPics();
    InitTree();
    plc = new ModbusTCP; //初始化PLC对象
//    plc->OpenModbusTCP(plc_Address.ip.toStdString());  //开启初始化端口连接
    sensor = new CSensor();//初始化传感器对象
    sensor->Stcp->DiscTCP();//关闭初始化自动连接

    connect(sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));
//    m_camera = new QCamera(this);//初始化摄像头设备
//    m_camera->setCaptureMode(QCamera::CaptureVideo);//设置捕捉模式为视频
//    m_camera->setViewfinder(ui->CameraWidget);//设置 摄像头画面的显示位置
    //摄像头线程对象实例化
    myThread=new CameraThread();
    myImage = new Mat();
//    initCameraDeviceName(); /*初始化摄像头设备*/
    //调用moveToThread将该任务交给workThread
//    myThread->moveToThread(mainThread);
    //将线程中的信号与槽进行连接
//    connect(this, SIGNAL(operateCamera()), myThread, SLOT(start()));
    //将线程中的结束摄像头信号与槽进行连接
//    connect(this, SIGNAL(stopCamera()), myThread, SLOT(stop()));
//    //该线程结束时销毁
//    connect(mainThread, &QThread::finished, myThread, &QObject::deleteLater);

    //UI界面初始化
    UIInit();
    Connections();
    //启动线程
//    mainThread->start();

}

MainWindow::~MainWindow()
{
    WriteSettings();
    disconnect(myThread,SIGNAL(mess()),this,SLOT(display()));
    disconnect(sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));
    delete ui; /*摄像头类在此删除*/
    plc->CloseModbusTCP();
    delete plc; //析构plc对象i
    plc = nullptr;
    sensor->quit();
    sensor->wait();
    delete sensor; //析构传感器对象
    sensor = nullptr;
    camera->closeCamera();
    delete camera;
    camera = nullptr;
    myThread->quit();
    myThread->wait();
    delete myThread;
    myThread = nullptr;
    delete myImage;
    myImage =nullptr;


}



void MainWindow::on_toolButton_Camera_Start_clicked() /*相机开启关闭done currently*/
{
    if(camera_Connected){
        if(!camera_Clicked){
           camera->startCamera();
           myThread->start();
           emit operateCamera();
    //         图标变化
           QIcon video_Stop(":/icons/icons/video_Stop.svg");
           ui->toolButton_Camera_Start->setIcon(video_Stop);
           ui->toolButton_Camera_Start->setIconSize(QSize(40, 40));
        }
        else{
             camera->stopCamera();
             emit stopCamera();
             myThread->stop();
             myThread->quit();
             myThread->wait();
    //         图标变化
             QIcon video_Start(":/icons/icons/video_Start.svg");
             ui->toolButton_Camera_Start->setIcon(video_Start);
             ui->toolButton_Camera_Start->setIconSize(QSize(40, 40));
        }
        camera_Clicked = !camera_Clicked;        
    }
}



void MainWindow::on_toolButton_clicked()
{
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();//获取可用摄像头设备列表
    foreach (const QCameraInfo &cameraInfo, cameras)
    {
       qDebug()<<cameraInfo.deviceName();//摄像头的设备名称
    }
    camera_Save_address = QFileDialog::getExistingDirectory(this,"打开文件目录","./pics");
}

//PLC光源
void MainWindow::on_toolButton_PLC_Light_clicked()
{
	if (!PLC_Light) {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050504FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_Light->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon PLC_Lights(":/icons/icons/switchOn.svg");
            ui->toolButton_PLC_Light->setIcon(PLC_Lights);
            ui->toolButton_PLC_Light->setIconSize(QSize(60, 30));
                PLC_Light = !PLC_Light;
        }

	}
	else {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505040000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_Light->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon PLC_Lights(":/icons/icons/switchOff.svg");
            ui->toolButton_PLC_Light->setIcon(PLC_Lights);
            ui->toolButton_PLC_Light->setIconSize(QSize(60, 30));
                PLC_Light = !PLC_Light;
        }

	}

}

//PLC快换
void MainWindow::on_toolButton_PLC_QuickChange_clicked()
{
    QMessageBox:: StandardButton result = QMessageBox::warning(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("拆快换使用正压，装快换使用负压\n拆快换之前请确保已扶住工装"), QMessageBox::Yes | QMessageBox::No,
                                              QMessageBox::No);
    switch (result)
    {
        case QMessageBox::Yes:
        {
            if (!QChange)
            {
            //        plc->CtrlPLC(plc_Address.ip.toStdString(), "00050506FF00");/*发送控制命令*/
                if(true) //返回发送信息
                {
                    //指示灯亮
                    ui->label_PLC_QuickChange->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                             "max-height:30px;border-radius:15px;border:1px solid black;background:green");
                    QIcon paw_Num(":/icons/icons/switchOn.svg");
                    ui->toolButton_PLC_QuickChange->setIcon(paw_Num);
                    ui->toolButton_PLC_QuickChange->setIconSize(QSize(60, 30));
                        QChange = !QChange;
                }
            }
            else {
        //        plc->CtrlPLC(plc_Address.ip.toStdString(), "000505060000");/*发送控制命令*/
                if(true) //返回发送信息
                {
                    //指示灯亮
                    ui->label_PLC_QuickChange->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                             "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
                    QIcon paw_Num(":/icons/icons/switchOff.svg");
                    ui->toolButton_PLC_QuickChange->setIcon(paw_Num);
                    ui->toolButton_PLC_QuickChange->setIconSize(QSize(60, 30));
                        QChange = !QChange;
                }
            }
        }
        break;
    }
}

//PLC单吸盘
void MainWindow::on_pushButton_PLC_SingleGripper_clicked()
{
    if(!paw_Num_One){
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050502FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_SingleGripper->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_SingleGripper->setIcon(paw_Num);
            ui->pushButton_PLC_SingleGripper->setIconSize(QSize(60, 30));
                paw_Num_One = !paw_Num_One;
        }


    }
    else {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505020000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_SingleGripper->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_SingleGripper->setIcon(paw_Num);
            ui->pushButton_PLC_SingleGripper->setIconSize(QSize(60, 30));
                paw_Num_One = !paw_Num_One;
        }

    }

}

//PLC多吸盘
void MainWindow::on_pushButton_PLC_MultiGripper_clicked()
{
    if(!paw_Num_Two){
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050502FF00");/*发送控制命令*/
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050503FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_MultiGripper->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_MultiGripper->setIcon(paw_Num);
            ui->pushButton_PLC_MultiGripper->setIconSize(QSize(60, 30));
                paw_Num_Two = !paw_Num_Two;
        }

    }
    else {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505020000");/*发送控制命令*/
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505030000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_MultiGripper->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_MultiGripper->setIcon(paw_Num);
            ui->pushButton_PLC_MultiGripper->setIconSize(QSize(60, 30));
                paw_Num_Two = !paw_Num_Two;
        }

    }

}

//PLC吸钉
void MainWindow::on_pushButton_PLC_SuckScrew_clicked()
{
	if (!screw_Suck) {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050505FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_SuckScrew->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_SuckScrew->setIcon(paw_Num);
            ui->pushButton_PLC_SuckScrew->setIconSize(QSize(60, 30));
                screw_Suck = !screw_Suck;
        }

	}
	else {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505050000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_SuckScrew->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_SuckScrew->setIcon(paw_Num);
            ui->pushButton_PLC_SuckScrew->setIconSize(QSize(60, 30));
                screw_Suck = !screw_Suck;
        }

	}

}

//PLC拧紧
void MainWindow::on_pushButton_PLC_Tighten_clicked()
{
	if (!screw_Tighten) {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "00050506FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_Tighten->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
                screw_Tighten = !screw_Tighten;
        }

	}
	else {
		plc->CtrlPLC(plc_Address.ip.toStdString(), "000505060000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_Tighten->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
                screw_Tighten = !screw_Tighten;
        }

	}

}

void MainWindow::on_pushButton_PLC_Vacuum_clicked()
{
    if (!Vacuum) {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "00050506FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯亮
            ui->label_PLC_Vacuum->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
                Vacuum = !Vacuum;
        }

    }
    else {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "000505060000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯灭
            ui->label_PLC_Vacuum->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
                Vacuum = !Vacuum;
        }

    }

}

void MainWindow::on_pushButton_PLC_DestroyVacuum_clicked()
{
    if (!DestroyVacuum) {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "00050506FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯灭
            ui->label_PLC_DestroyVacuum->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
            QIcon paw_Num(":/icons/icons/switchOn.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
            DestroyVacuum = !DestroyVacuum;
        }

    }
    else {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "000505060000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯灭
            ui->label_PLC_DestroyVacuum->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
            QIcon paw_Num(":/icons/icons/switchOff.svg");
            ui->pushButton_PLC_Tighten->setIcon(paw_Num);
            ui->pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
            DestroyVacuum = !DestroyVacuum;
        }
    }
}

void MainWindow::on_toolButton_PLC_IO_clicked()
{
    QString IO = ui->lineEdit_PLC_Connect_IO->text();
    if(!QIO)
    {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "00050506FF00");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯灭
            ui->label_PLC_IO->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:green");
        }
        QIcon paw_Num(":/icons/icons/switchOn.svg");
        ui->lineEdit_PLC_Connect_IO->setEnabled(false);
        ui->toolButton_PLC_IO->setIcon(paw_Num);
        ui->toolButton_PLC_IO->setIconSize(QSize(60, 30));
            QIO = !QIO;
    }
    else {
//        plc->CtrlPLC(plc_Address.ip.toStdString(), "000505060000");/*发送控制命令*/
        if(true) //返回发送信息
        {
            //指示灯灭
            ui->label_PLC_IO->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;"
                                                     "max-height:30px;border-radius:15px;border:1px solid black;background:grey");
        }
        QIcon paw_Num(":/icons/icons/switchOff.svg");
        ui->lineEdit_PLC_Connect_IO->setEnabled(true);
        ui->toolButton_PLC_IO->setIcon(paw_Num);
        ui->toolButton_PLC_IO->setIconSize(QSize(60, 30));
            QIO = !QIO;
    }

}

void MainWindow::initCameraDeviceName()
{
//    m_camera.clear();
//    foreach (QCameraInfo info, QCameraInfo::availableCameras()) {
//       m_camera.append(info);
//    }
//    if(m_camera.count() != 0){
//        camera = new QCamera(m_camera.at(select_camera),this);
//        camera->setCaptureMode(QCamera::CaptureVideo);//设置捕捉模式为视频
//        camera->setViewfinder(ui->CameraWidget);//设置 摄像头画面的显示位置
//    }
//    m_camera.clear();
//    foreach (QCameraInfo info, QCameraInfo::availableCameras()) {
//       m_camera.append(info);
//    }
    connectCamera();

}

void MainWindow::on_toolButton_Sensor_Monitor_clicked()
{
//    /** 嵌入你的代码
//     * 如果是周边力数据采集*/
//    if(Force_Around_Get){
//        if(!monitor_Status){
//           sensor->stop(monitor_Status); /** ture是停止采集，false是开始采集 **/
//           sensor->start(); /*开始采集传感器数据*/
//    //         图标变化
//           QIcon monitor_Stop(":/icons/icons/monitor0ffW.svg");
//           ui->pushButton_Sensor_Monitor->setIcon(monitor_Stop);
//           ui->pushButton_Sensor_Monitor->setIconSize(QSize(80, 80));
//           ui->pushButton_ForceSwitch->setEnabled(false);
//        }
//        else{
//            sensor->stop(monitor_Status);
//            sensor->quit();
//            sensor->wait();
//    //         图标变化
//             QIcon monitor_Start(":/icons/icons/monitorOnW.svg");
//             ui->pushButton_Sensor_Monitor->setIcon(monitor_Start);
//             ui->pushButton_Sensor_Monitor->setIconSize(QSize(80, 80));
//             ui->pushButton_ForceSwitch->setEnabled(true);

//        }
//        monitor_Status =! monitor_Status;
//    }
    /** 如果仅仅是监测力数据采集*/
//    else{
        if(!monitor_Status){
           sensor->stop(monitor_Status); /** ture是停止采集，false是开始采集 **/
           sensor->start(); /*开始采集传感器数据*/
    //         图标变化
           QIcon monitor_Stop(":/icons/icons/monitor0ffW.svg");
           ui->toolButton_Sensor_Monitor->setIcon(monitor_Stop);
           ui->toolButton_Sensor_Monitor->setIconSize(QSize(80, 80));
        }
        else{
            sensor->stop(monitor_Status);
            sensor->quit();
            sensor->wait();
    //         图标变化
             QIcon monitor_Start(":/icons/icons/monitorOnW.svg");
             ui->toolButton_Sensor_Monitor->setIcon(monitor_Start);
             ui->toolButton_Sensor_Monitor->setIconSize(QSize(80, 80));

        }
        monitor_Status =! monitor_Status;
//    }
}



void MainWindow::ChartsInit() {
    /** 创建曲线图 **/
    chart_XYZ = new QChart();
    chart_MXYZ = new QChart();
    seriesX = new QSplineSeries();     //创建曲线1
    seriesY = new QSplineSeries();     //创建曲线2
    seriesZ = new QSplineSeries();     //创建曲线3
    seriesMx = new QSplineSeries();     //创建曲线4
    seriesMy = new QSplineSeries();     //创建曲线5
    seriesMz = new QSplineSeries();     //创建曲线6

    chart_XYZ->addSeries(seriesX);
    chart_XYZ->addSeries(seriesY);
    chart_XYZ->addSeries(seriesZ);
    chart_MXYZ->addSeries(seriesMx);
    chart_MXYZ->addSeries(seriesMy);
    chart_MXYZ->addSeries(seriesMz);
    seriesX->setName("X");
    seriesY->setName("Y");
    seriesZ->setName("Z");
    seriesMx->setName("A");
    seriesMy->setName("B");
    seriesMz->setName("C");

    seriesX->setPen(QPen(Qt::red, 2.f));
    seriesY->setPen(QPen (Qt::green, 2.f));
    seriesZ->setPen(QPen (Qt::blue, 2.f));
    seriesMx->setPen(QPen (Qt::red, 2.f));
    seriesMy->setPen(QPen (Qt::green, 2.f));
    seriesMz->setPen(QPen (Qt::blue, 2.f));

    chart_XYZ->legend()->show();
    chart_MXYZ->legend()->show();//hide

    chart_XYZ->setTheme(QChart::ChartThemeLight);				//主题
//    chart_XYZ->setTitle(QString::fromLocal8Bit("力数据采集"));	//标题
    chart_XYZ->createDefaultAxes();								//设置默认的坐标系，如果不设置程序是运行不了的
    //chart->axisX()->setRange(0, 100);						// x轴动态，放在槽函数里实时更新
    //chart->axisY()->setRange(-10, 20);						// y轴固定范围
    chart_XYZ->axes(Qt::Horizontal).first()->setTitleText(QString::fromLocal8Bit("时间")); //设置中文标题
    chart_XYZ->axes(Qt::Vertical).first()->setTitleText(QString::fromLocal8Bit("力 N"));
    chart_XYZ->axes(Qt::Vertical).first()->setTitleBrush(Qt::darkMagenta);					//设置字色

    chart_MXYZ->setTheme(QChart::ChartThemeLight);				//主题
//    chart_MXYZ->setTitle(QString::fromLocal8Bit("力数据采集"));	//标题
    chart_MXYZ->createDefaultAxes();								//设置默认的坐标系，如果不设置程序是运行不了的
    //chart->axisX()->setRange(0, 100);						// x轴动态，放在槽函数里实时更新
    //chart->axisY()->setRange(-10, 20);						// y轴固定范围
    chart_MXYZ->axes(Qt::Horizontal).first()->setTitleText(QString::fromLocal8Bit("时间")); //设置中文标题
    chart_MXYZ->axes(Qt::Vertical).first()->setTitleText(QString::fromLocal8Bit("力矩 N·m"));
    chart_MXYZ->axes(Qt::Vertical).first()->setTitleBrush(Qt::darkMagenta);					//设置字色

    ui->widget_Chart_Coordinate->setRenderHint(QPainter::Antialiasing);		//抗锯齿渲染
    ui->widget_Chart_Coordinate->setChart(chart_XYZ);            //将图表绑定到视图

    ui->widget_Chart_Angle->setRenderHint(QPainter::Antialiasing);		//抗锯齿渲染
    ui->widget_Chart_Angle->setChart(chart_MXYZ);            //将图表绑定到视图
}


void MainWindow::UpdateXYZMxMyMz(int t, double* vXYZMxMyMz, int n) {
    //std::cout << "更新" << std::endl;
    // 更新曲线
    seriesX->append(t, vXYZMxMyMz[0]);  //添加数据
    seriesY->append(t, vXYZMxMyMz[1]);  //添加数据
    seriesZ->append(t, vXYZMxMyMz[2]);  //添加数据
    seriesMx->append(t, vXYZMxMyMz[3]);  //添加数据
    seriesMy->append(t, vXYZMxMyMz[4]);  //添加数据
    seriesMz->append(t, vXYZMxMyMz[5]);  //添加数据
    if(seriesX->count()>300){
        seriesX->removePoints(0,seriesX->count()-200);
        seriesY->removePoints(0,seriesY->count()-200);
        seriesZ->removePoints(0,seriesZ->count()-200);
        seriesMx->removePoints(0,seriesMx->count()-200);
        seriesMy->removePoints(0,seriesMy->count()-200);
        seriesMz->removePoints(0,seriesMz->count()-200);
    } /*删除多余点*/
    double ymin = min(vXYZMxMyMz[0], min(vXYZMxMyMz[1], vXYZMxMyMz[2]));
    double ymax = max(vXYZMxMyMz[0], max(vXYZMxMyMz[1], vXYZMxMyMz[2]));

    chart_XYZ->axisY()->setRange(ymin-5, ymax+5);						// x轴动态，放在槽函数里实时更新
    chart_XYZ->axisX()->setRange(t-50, t+10);
    ymin = min(vXYZMxMyMz[3], min(vXYZMxMyMz[4], vXYZMxMyMz[5]));
    ymax = max(vXYZMxMyMz[3], max(vXYZMxMyMz[4], vXYZMxMyMz[5]));

    chart_MXYZ->axisY()->setRange(ymin - 1, ymax + 1);						// x轴动态，放在槽函数里实时更新
    chart_MXYZ->axisX()->setRange(t - 50, t + 10);


    /** 更新数据 **/
    QString stTmp;
    if (std::abs(vXYZMxMyMz[0]) >= 200) {
        ui->lcdNumber_X->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_X->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[1]);
    ui->lcdNumber_X->display(stTmp);

    if (std::abs(vXYZMxMyMz[1]) >= 200) {
        ui->lcdNumber_Y->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_Y->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[1]);
    ui->lcdNumber_Y->display(stTmp);

    if (std::abs(vXYZMxMyMz[2]) >= 200) {
        ui->lcdNumber_Z->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_Z->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[2]);
    ui->lcdNumber_Z->display(stTmp);

    if (std::abs(vXYZMxMyMz[3]) >= 20) {
        ui->lcdNumber_A->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_A->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[3]);
    ui->lcdNumber_A->display(stTmp);

    if (std::abs(vXYZMxMyMz[4]) >= 20) {
        ui->lcdNumber_B->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_B->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[4]);
    ui->lcdNumber_B->display(stTmp);

    if (std::abs(vXYZMxMyMz[5]) >= 20) {
        ui->lcdNumber_C->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_C->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[5]);
    ui->lcdNumber_C->display(stTmp);
    // todo 力数据异常，直接中断其他函数，抬高机械臂
//    if (std::abs(vXYZMxMyMz[0]) >= 180 || std::abs(vXYZMxMyMz[1]) >= 180 || std::abs(vXYZMxMyMz[2]) >= 360) {
//        ui->widget_Chart_Coordinate->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
//    } /** 还有问题没改进 **/
//    if (std::abs(vXYZMxMyMz[3]) >= 15 || std::abs(vXYZMxMyMz[4]) >= 15 || std::abs(vXYZMxMyMz[5]) >= 15) {
//        ui->widget_Chart_Angle->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
//    } /** 还有问题没改进 **/

    // 更新按钮状态
//    if (flagStartButton) {
//        ui.startButton->setEnabled(true);
//        ui.startButton->setText(u8"开始采集");
//        qApp->processEvents();
//    }
}

//void MainWindow::CtrlRobot() {
//    std::cout << "/***********开启新线程 采集数据***********/" << std::endl;
//    // 发指令 得到机器人当前坐标
//    float x0, y0, z0, a, b, c, x, y, z;
//    double a1, a2, a3, a4, a5, a6;
//    for (int i = 0; i < 360; i++) {		// 一次加1°
//        printf_s("*******************第%d/%d次采集数据*******************\n", i, 360);
//        robot->GetRobotXYZABC(&x0, &y0, &z0, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);		//首先读取数据
//        //cout << "B  C  O 点："<<x0 << " " << y0 << " " << z0 << endl;
//        robot->CtrlRobotXYZABC(1014.21, -17.14, 1017.87, -179.92, -0.21, 179.65);			// 正确装配位置上方
//        robot->GetRobotXYZABC(&x0, &y0, &z0, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);		//首先读取数据
//        cout << "初  始  点：" << x0 << " " << y0 << " " << z0 << endl;
//        // 根据方向和距离 解算目标点
//        int angle = ui.lineEdit_Dir->text().toFloat() + i;
//        float fLen = ui.lineEdit_Dis->text().toFloat();
//        float x1 = x0 + fLen * cos(angle * 3.1415926 / 180.0);
//        float y1 = y0 + fLen * sin(angle * 3.1415926 / 180.0);
//        int height = 10;	// 抬高的高度
//        // 更新框里面的内容
//        ui.lineEdit_LDir->setText(QString::number(angle + 180));
//        ui.lineEdit_LDis->setText(QString::number(fLen));
//        // 发指令 使机器人到达目标点
//        DWORD t1, t2;
//        t1 = GetTickCount();
//        robot->CtrlRobotXYZABC(x0, y0, z0 + height, a, b, c);			// 抬高40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        t2 = GetTickCount();

//        cout << "到达 1号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x1, y1, z, a, b, c);			// 到指定点 的正上方
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "到达 2号点：" << x << " " << y << " " << z << endl;
//        // 获取悬空状态的六轴力
//        double dXYZMxMyMz[M3706C_CHN_NUMBER];
//        sensor->Stcp->GetDataGOD(dXYZMxMyMz);
//        double Fx = dXYZMxMyMz[0], Fy = dXYZMxMyMz[1], Fz = dXYZMxMyMz[2];
//        double Mx = dXYZMxMyMz[3], My = dXYZMxMyMz[4],Mz= dXYZMxMyMz[5];

//        robot->CtrlRobotXYZABC(x, y, z - height, a, b, c);					// 下降40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "到达目标点：" << x << " " << y << " " << z << endl;

//        // 指令获取当前时刻 六轴力
//        sensor->Stcp->GetDataGOD(dXYZMxMyMz);
//        // 保存六轴力+2个label数据
//        std::ofstream outFile;
//        outFile.open("test.csv", std::ios::out | std::ios::app);
//        outFile << dXYZMxMyMz[0]-Fx << "," << dXYZMxMyMz[1]-Fy << "," << dXYZMxMyMz[2]-Fz << "," << dXYZMxMyMz[3]-Mx << ","
//            << dXYZMxMyMz[4]-My << "," << dXYZMxMyMz[5]-Mz << "," << (angle + 180)%360 << "," << fLen << endl;
//        outFile.close();

//        // 发指令 使机器人返回起点
//        robot->CtrlRobotXYZABC(x, y, z + height, a, b, c);			// 抬高40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "返回 2号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x0, y0, z, a, b, c);			// 回到起始点 的正上方
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "返回 1号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x0, y0, z0, a, b, c);					// 下降40，回到起始点
//        //robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        Sleep((t2 - t1)*1.0 / 1000+0.3);
//        cout << "返回初始点：" << x0 << " " << y0 << " " << z0 << endl;
//    }
//    // 用于更新按钮状态
//    flagStartButton = true;
//}

//void MainWindow::CollectData() {
//    std::cout << "/***********开启新线程 采集数据***********/" << std::endl;
//    // 发指令 得到机器人当前坐标
//    float x0, y0, z0, a, b, c, x, y, z;
//    double a1, a2, a3, a4, a5, a6;
//    for (int i = 0; i < 360; i++) {		// 一次加1°
//        printf_s("*******************第%d/%d次采集数据*******************\n", i, 360);
//        robot->GetRobotXYZABC(&x0, &y0, &z0, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);		//首先读取数据
//        //cout << "B  C  O 点："<<x0 << " " << y0 << " " << z0 << endl;
//        robot->CtrlRobotXYZABC(1014.21, -17.14, 1017.87, -179.92, -0.21, 179.65);			// 正确装配位置上方
//        robot->GetRobotXYZABC(&x0, &y0, &z0, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);		//首先读取数据
//        cout << "初  始  点：" << x0 << " " << y0 << " " << z0 << endl;
//        // 根据方向和距离 解算目标点
//        int angle = ui.lineEdit_Dir->text().toFloat() + i;
//        float fLen = ui.lineEdit_Dis->text().toFloat();
//        float x1 = x0 + fLen * cos(angle * 3.1415926 / 180.0);
//        float y1 = y0 + fLen * sin(angle * 3.1415926 / 180.0);
//        int height = 10;	// 抬高的高度
//        // 更新框里面的内容
//        ui.lineEdit_LDir->setText(QString::number(angle + 180));
//        ui.lineEdit_LDis->setText(QString::number(fLen));
//        // 发指令 使机器人到达目标点
//        DWORD t1, t2;
//        t1 = GetTickCount();
//        robot->CtrlRobotXYZABC(x0, y0, z0 + height, a, b, c);			// 抬高40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        t2 = GetTickCount();

//        cout << "到达 1号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x1, y1, z, a, b, c);			// 到指定点 的正上方
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "到达 2号点：" << x << " " << y << " " << z << endl;
//        // 获取悬空状态的六轴力
//        double dXYZMxMyMz[M3706C_CHN_NUMBER];
//        sensor->Stcp->GetDataGOD(dXYZMxMyMz);
//        double Fx = dXYZMxMyMz[0], Fy = dXYZMxMyMz[1], Fz = dXYZMxMyMz[2];
//        double Mx = dXYZMxMyMz[3], My = dXYZMxMyMz[4],Mz= dXYZMxMyMz[5];

//        robot->CtrlRobotXYZABC(x, y, z - height, a, b, c);					// 下降40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "到达目标点：" << x << " " << y << " " << z << endl;

//        // 指令获取当前时刻 六轴力
//        sensor->Stcp->GetDataGOD(dXYZMxMyMz);
//        // 保存六轴力+2个label数据
//        std::ofstream outFile;
//        outFile.open("test.csv", std::ios::out | std::ios::app);
//        outFile << dXYZMxMyMz[0]-Fx << "," << dXYZMxMyMz[1]-Fy << "," << dXYZMxMyMz[2]-Fz << "," << dXYZMxMyMz[3]-Mx << ","
//            << dXYZMxMyMz[4]-My << "," << dXYZMxMyMz[5]-Mz << "," << (angle + 180)%360 << "," << fLen << endl;
//        outFile.close();

//        // 发指令 使机器人返回起点
//        robot->CtrlRobotXYZABC(x, y, z + height, a, b, c);			// 抬高40
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "返回 2号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x0, y0, z, a, b, c);			// 回到起始点 的正上方
//        robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        cout << "返回 1号点：" << x << " " << y << " " << z << endl;

//        robot->CtrlRobotXYZABC(x0, y0, z0, a, b, c);					// 下降40，回到起始点
//        //robot->GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
//        Sleep((t2 - t1)*1.0 / 1000+0.3);
//        cout << "返回初始点：" << x0 << " " << y0 << " " << z0 << endl;
//    }
//    // 用于更新按钮状态
//    flagStartButton = true;
//}


void MainWindow::on_checkBox_X_clicked()
{
    if (ui->checkBox_X->isChecked())	{
        seriesX->show();
    }
    else	{
        seriesX->hide();
    }
}

void MainWindow::on_checkBox_Y_clicked()
{
    if (ui->checkBox_Y->isChecked())	{
        seriesY->show();
    }
    else	{
        seriesY->hide();
    }
}

void MainWindow::on_checkBox_Z_clicked()
{
    if (ui->checkBox_Z->isChecked())	{
        seriesZ->show();
    }
    else	{
        seriesZ->hide();
    }
}

void MainWindow::on_checkBox_Mx_clicked()
{
    if (ui->checkBox_Mx->isChecked())	{
        seriesMx->show();
    }
    else	{
        seriesMx->hide();
    }
}

void MainWindow::on_checkBox_My_clicked()
{
    if (ui->checkBox_My->isChecked())	{
        seriesMy->show();
    }
    else	{
        seriesMy->hide();
    }
}

void MainWindow::on_checkBox_Mz_clicked()
{
    if (ui->checkBox_Mz->isChecked())	{
        seriesMz->show();
    }
    else	{
        seriesMz->hide();
    }
}

void MainWindow::on_actionCameraOrentation_triggered()
{
    camera_Clicked = true;
    on_toolButton_Camera_Start_clicked(); //关闭相机监测 状态设为关闭
    disconnect(myThread,SIGNAL(mess()),this,SLOT(display()));
    int cameraOriginWidth = camera->getWidth();
    int cameraOriginheight = camera->getHeight(); //保存原始宽高比
    orientationdialog = new OrientationDialog(this,myThread,camera,myImage);
    orientationdialog->setModal(true);
    orientationdialog->exec();
    camera->setWidth(cameraOriginWidth);
    camera->setHeight(cameraOriginheight); //恢复原始宽高比
    delete orientationdialog;
    orientationdialog =nullptr;
    connect(myThread,SIGNAL(mess()),this,SLOT(display()));
}
//void MainWindow::display(const Mat* imagePtr)
//{
//    std::cout<<"so"<<std::endl;
//    //判断是黑白、彩色图像
//    qDebug()<<"cameraoutput";
//    QImage* QmyImage=new QImage();
//    if(imagePtr->channels()>1)
//    {
//        *QmyImage=QImage((const unsigned char*)(imagePtr->data),imagePtr->cols, imagePtr->rows, QImage::Format_RGB888);
//    }
//    else
//    {
//        *QmyImage=QImage((const unsigned char*)(imagePtr->data),imagePtr->cols, imagePtr->rows, QImage::Format_Indexed8);
//    }

//    *QmyImage = (*QmyImage).scaled(ui->CameraWidget->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
//    //显示图像
//    ui->CameraWidget->setPixmap(QPixmap::fromImage(*QmyImage));
//    delete QmyImage;
//}

void MainWindow::display()
{
    //判断是黑白、彩色图像
//    qDebug()<<"TUXZS";
    QImage* QmyImage=new QImage();
    QImage* QFirstImage = new QImage();
    if(myImage->channels()>1)
    {
        *QmyImage=QImage((const unsigned char*)(myImage->data),myImage->cols, myImage->rows, QImage::Format_RGB888);
    }
    else
    {
        *QmyImage=QImage((const unsigned char*)(myImage->data),myImage->cols, myImage->rows, QImage::Format_Indexed8);
    }

    *QmyImage = (*QmyImage).scaled(ui->CameraWidget->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    *QFirstImage = (*QmyImage).scaled(ui->picture->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    //显示图像
    ui->CameraWidget->setPixmap(QPixmap::fromImage(*QmyImage));    
    ui->CameraWidget->setScaledContents(true);
    ui->picture->setPixmap(QPixmap::fromImage(*QFirstImage));
    ui->picture->setScaledContents(true);
    delete QmyImage;
    delete QFirstImage;
}

void MainWindow::connectCamera()
{
    //连接相机
    camera->findCamera();
    if (m_camera.count() != 0)
    {
        qDebug()<<"camera";
//        if(camera->connectCamera("select_camera.toStdString()") == 0)
//        if(camera->connectCamera("00D52460485") == 0)
        if(camera->connectCamera(select_camera.toStdString()) == 0)
        {
            camera_Connected =true;
        }
        else
        {
            camera_Connected =false;
            QMessageBox::warning(NULL, QStringLiteral("Warning"), QStringLiteral("相机连接不成功，请确认是否选择相机，"), QMessageBox::Yes);
        }
        //设置为触发模式
        std::cout<<"TriggerMode:  "<<camera->setTriggerMode(1)<<std::endl;
        //设置触发源为软触发
        std::cout<<"TriggerSource:  "<<camera->setTriggerSource(7)<<std::endl;
        //设置曝光时间
        std::cout<<"SetExposureTime:  "<<camera->setExposureTime(40000)<<std::endl;
        //开启相机采集
        std::cout<<"StartCamera:  "<<camera->startCamera()<<std::endl;

        myThread->getCameraPtr(camera);
        myThread->getImagePtr(myImage);
//        myThread->start();
    }
    else
    {
        QMessageBox::warning(NULL, QStringLiteral("Warning"), QStringLiteral("不存在连接的USB摄像头，请检查连接"), QMessageBox::Yes);
    }
}

//void MainWindow::on_toolButton_ForceSwitch_clicked()
//{
////    //2个输入框是否可以操作控制
////    Force_Around_Get =! Force_Around_Get;
////    ui->widget_30->setEnabled(Force_Around_Get);
////    if (Force_Around_Get){
////        QIcon monitor_Start(":/icons/icons/switchOn.svg");
////        ui->pushButton_ForceSwitch->setIcon(monitor_Start);
////        ui->pushButton_ForceSwitch->setIconSize(QSize(120, 30));
////    }
////    else{
////        QIcon monitor_Start(":/icons/icons/switchOff.svg");
////        ui->pushButton_ForceSwitch->setIcon(monitor_Start);
////        ui->pushButton_ForceSwitch->setIconSize(QSize(120, 30));
////    }
//}

void MainWindow::on_toolButton_Sensor_Demarcate_clicked()
{
    //t添加你的标定代码

    ui->toolButton_Sensor_Calculate->setEnabled(true);
}

void MainWindow::on_toolButton_Sensor_Compensate_clicked()
{


    ui->toolButton_Sensor_Compensate->setEnabled(false);
}

void MainWindow::on_toolButton_Submit_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //全部上传 doublespinbox_x
    }
    //主界面的机器人控制程序
    else
    {
        //全部上传doublespinbox_x_2
    }
}

void MainWindow::ReadSettings()
{
     QSettings settings(QCoreApplication::applicationDirPath()+"/config.ini",QSettings::IniFormat);
     settings.beginGroup("savingAddress");
     qDebug()<<settings.value("camera_Save_address").toString()<<"位置"<<QCoreApplication::applicationDirPath();
     camera_Save_address = settings.value("camera_Save_address").toString();
     Oorientation_Save_Address = settings.value("Oorientation_Save_Address").toString();
//     force_Save_Address = settings.value("force_Save_Address").toString();
     select_camera = settings.value("select_camera").toString();
     settings.endGroup();
     settings.beginGroup("IPPort");
     plc_Address.ip = settings.value("plc_Address/ip").toString();
     plc_Address.port = settings.value("plc_Address/port").toString();
     sensor_Address.ip = settings.value("sensor_Address/ip").toString();
     sensor_Address.port = settings.value("sensor_Address/port").toString();
     camera_Address.ip = settings.value("camera_Address/ip").toString();
     camera_Address.port = settings.value("camera_Address/port").toString();
     robot_Address.ip = settings.value("robot_Address/ip").toString();
     robot_Address.port = settings.value("robot_Address/port").toString();
     Oorientation_Save_Address = settings.value("Oorientation_Save_Address").toString();
//     force_Save_Address = settings.value("force_Save_Address").toString();
     select_camera = settings.value("select_camera").toString();
     settings.endGroup();
     /** 点数据保存 */
//     settings.beginGroup("Ponits");
     int size = settings.beginReadArray("PointCoordinates");
     qDebug()<<"size"<<size;
     for (int i = 0; i < size; ++i) {
        settings.setArrayIndex(i);
        PointCoordinate pointcoordinate;
        pointcoordinate.num = settings.value("num").toInt();
        pointcoordinate.angle_x = settings.value("angle_x").toDouble();
        pointcoordinate.angle_y = settings.value("angle_y").toDouble();
        pointcoordinate.angle_z = settings.value("angle_z").toDouble();
        PointsSaved.emplace_back(pointcoordinate);
        qDebug()<<pointcoordinate.num<<pointcoordinate.angle_x<<PointsSaved.size();
     }
     settings.endArray();
//     settings.endGroup();
}

void MainWindow::WriteSettings()
{
     QSettings settings(QCoreApplication::applicationDirPath()+"/config.ini",QSettings::IniFormat);
     qDebug()<<"saving"<<camera_Save_address;
     settings.beginGroup("savingAddress");
     settings.setValue("camera_Save_address", camera_Save_address);
     settings.setValue("Oorientation_Save_Address", Oorientation_Save_Address);
//     settings.setValue("force_Save_Address", force_Save_Address);
     settings.setValue("select_camera", select_camera);
     settings.endGroup();
     settings.beginGroup("IPPort");
     settings.setValue("plc_Address/ip", plc_Address.ip);
     settings.setValue("plc_Address/port", plc_Address.port);
     settings.setValue("sensor_Address/ip", sensor_Address.ip);
     settings.setValue("sensor_Address/port", sensor_Address.port);
     settings.setValue("camera_Address/ip", camera_Address.ip);
     settings.setValue("camera_Address/port", camera_Address.port);
     settings.setValue("robot_Address/ip", robot_Address.ip);
     settings.setValue("robot_Address/port", robot_Address.port);
     settings.setValue("Oorientation_Save_Address", Oorientation_Save_Address);
//     settings.setValue("force_Save_Address", force_Save_Address);
     settings.setValue("select_camera", select_camera);
     settings.endGroup();
     /** 标定点数据保存 */
//     settings.beginGroup("Ponits");
     settings.beginWriteArray("PointCoordinates");
     int currentlabel = 0;
     for(std::vector<PointCoordinate>::iterator it = PointsSaved.begin(); it!=PointsSaved.end();it++){
         settings.setArrayIndex(currentlabel);
         currentlabel += 1;
         settings.setValue("num", (*it).num);
         settings.setValue("angle_x", (*it).angle_x);
         settings.setValue("angle_y", (*it).angle_y);
         settings.setValue("angle_z", (*it).angle_z);
     }
     settings.endArray();
//     settings.endGroup();

}

void MainWindow::on_actionAround_ForceGet_triggered()
{
    monitor_Status = true;
    on_toolButton_Sensor_Monitor_clicked();
    disconnect(sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));
    forcegetdialog = new ForceGet(this,sensor);
    forcegetdialog->setModal(true);
    forcegetdialog->exec();
    delete forcegetdialog;
    forcegetdialog = nullptr;
    connect(sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->doubleSpinBox_Position_X->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_Y->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_Z->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_A->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_B->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_C->setSingleStep(arg1.toDouble()*0.001);

}

void MainWindow::on_toolButton_MovePattern_clicked()
{
    Point_Move = !Point_Move;
    ui->toolButton_Submit->setEnabled(!Point_Move);
    ui->toolButton_Submit_2->setEnabled(!Point_Move);
    /** 如果是点动 */
    if(Point_Move)
    {
        QIcon monitor_Start(":/icons/icons/switchOn.svg");
        ui->toolButton_MovePattern->setIcon(monitor_Start);
        ui->toolButton_MovePattern->setIconSize(QSize(80, 40));
        ui->toolButton_MovePattern_2->setIcon(monitor_Start);
        ui->toolButton_MovePattern_2->setIconSize(QSize(80, 40));
        ui->Minius_A->setEnabled(true);
        ui->Minius_B->setEnabled(true);
        ui->Minius_C->setEnabled(true);
        ui->Minius_X->setEnabled(true);
        ui->Minius_Y->setEnabled(true);
        ui->Minius_Z->setEnabled(true);
        ui->Plus_A->setEnabled(true);
        ui->Plus_B->setEnabled(true);
        ui->Plus_C->setEnabled(true);
        ui->Plus_X->setEnabled(true);
        ui->Plus_Y->setEnabled(true);
        ui->Plus_Z->setEnabled(true);
        ui->Zero_A->setEnabled(true);
        ui->Zero_B->setEnabled(true);
        ui->Zero_C->setEnabled(true);
        ui->Zero_X->setEnabled(true);
        ui->Zero_Y->setEnabled(true);
        ui->Zero_Z->setEnabled(true);
        ui->Zero_All->setEnabled(true);
        /** 主页面按钮 */
        ui->Minius_A_2->setEnabled(true);
        ui->Minius_B_2->setEnabled(true);
        ui->Minius_C_2->setEnabled(true);
        ui->Minius_X_2->setEnabled(true);
        ui->Minius_Y_2->setEnabled(true);
        ui->Minius_Z_2->setEnabled(true);
        ui->Plus_A_2->setEnabled(true);
        ui->Plus_B_2->setEnabled(true);
        ui->Plus_C_2->setEnabled(true);
        ui->Plus_X_2->setEnabled(true);
        ui->Plus_Y_2->setEnabled(true);
        ui->Plus_Z_2->setEnabled(true);
        ui->Zero_A_2->setEnabled(true);
        ui->Zero_B_2->setEnabled(true);
        ui->Zero_C_2->setEnabled(true);
        ui->Zero_X_2->setEnabled(true);
        ui->Zero_Y_2->setEnabled(true);
        ui->Zero_Z_2->setEnabled(true);
        ui->Zero_All_2->setEnabled(true);
//        ui->toolButton_MovePattern->setText(QString::fromLocal8Bit("连续点动"));

    }
    else
    {
        QIcon monitor_Start(":/icons/icons/switchOff.svg");
        ui->toolButton_MovePattern->setIcon(monitor_Start);
        ui->toolButton_MovePattern->setIconSize(QSize(80, 40));
        ui->toolButton_MovePattern_2->setIcon(monitor_Start);
        ui->toolButton_MovePattern_2->setIconSize(QSize(80, 40));
        ui->Minius_A->setEnabled(false);
        ui->Minius_B->setEnabled(false);
        ui->Minius_C->setEnabled(false);
        ui->Minius_X->setEnabled(false);
        ui->Minius_Y->setEnabled(false);
        ui->Minius_Z->setEnabled(false);
        ui->Plus_A->setEnabled(false);
        ui->Plus_B->setEnabled(false);
        ui->Plus_C->setEnabled(false);
        ui->Plus_X->setEnabled(false);
        ui->Plus_Y->setEnabled(false);
        ui->Plus_Z->setEnabled(false);
        ui->Zero_A->setEnabled(false);
        ui->Zero_B->setEnabled(false);
        ui->Zero_C->setEnabled(false);
        ui->Zero_X->setEnabled(false);
        ui->Zero_Y->setEnabled(false);
        ui->Zero_Z->setEnabled(false);
        ui->Zero_All->setEnabled(false);
        /** 主页面按钮 */
        ui->Minius_A_2->setEnabled(false);
        ui->Minius_B_2->setEnabled(false);
        ui->Minius_C_2->setEnabled(false);
        ui->Minius_X_2->setEnabled(false);
        ui->Minius_Y_2->setEnabled(false);
        ui->Minius_Z_2->setEnabled(false);
        ui->Plus_A_2->setEnabled(false);
        ui->Plus_B_2->setEnabled(false);
        ui->Plus_C_2->setEnabled(false);
        ui->Plus_X_2->setEnabled(false);
        ui->Plus_Y_2->setEnabled(false);
        ui->Plus_Z_2->setEnabled(false);
        ui->Zero_A_2->setEnabled(false);
        ui->Zero_B_2->setEnabled(false);
        ui->Zero_C_2->setEnabled(false);
        ui->Zero_X_2->setEnabled(false);
        ui->Zero_Y_2->setEnabled(false);
        ui->Zero_Z_2->setEnabled(false);
        ui->Zero_All_2->setEnabled(false);
//        ui->toolButton_MovePattern->setText(QString::fromLocal8Bit("单次直达"));
    }


}

void MainWindow::on_toolButton_SuddenStop_clicked()
{

}




void MainWindow::on_toolButton_Sensor_Calculate_clicked()
{
    //你的计算代码程序 输出3个double精度数据

    double a=0,b=0,c=0;

    losscaculation = new LossCaculation(this,a,b,c);
    losscaculation->setModal(true);
    losscaculation->exec();
    delete losscaculation;
    losscaculation = nullptr;
    ui->toolButton_Sensor_Compensate->setEnabled(true);
}

void MainWindow::on_actionSettings_triggered()
{
    connectsettings = new ConnectSettings(this);
    connectsettings->setModal(true);
    settings =false;
    connectsettings->exec();
    /**重新建立连接**/

    if (settings){
        qDebug()<< settings;
        plc->CloseModbusTCP();
        plc->OpenModbusTCP(plc_Address.ip.toStdString());
        qDebug()<<sensor_Address.ip.toStdString().c_str()<<sensor_Address.port.toInt();
        //string aaa = sensor_Address.ip.toStdString();
        sensor->Stcp->InitTCP(sensor_Address.ip.toStdString().c_str(),sensor_Address.port.toInt());
        camera->closeCamera();
        connectCamera();

        //机器人连接程序
    }
    delete connectsettings;
    connectsettings =nullptr;

}

void MainWindow::on_toolButton_Connect_PLC_clicked()
{
    if(PLC_Connected)
    {
        //关闭PLC
        plc->CloseModbusTCP();
        PLC_Connected =! PLC_Connected;
        ui->lineEdit_PLC_Connect_IP->setEnabled(true);
        ui->lineEdit_PLC_Connect_Port->setEnabled(true);
        ui->toolButton_Connect_PLC->setText(QString::fromLocal8Bit("连接"));
        ui->label_Connect_PLC->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                             "border:1px solid black;background:red");
    }
    else
    {
        plc_Address.ip = ui->lineEdit_PLC_Connect_IP->text();
        plc_Address.port = ui->lineEdit_PLC_Connect_Port->text();
        if(plc->OpenModbusTCP(plc_Address.ip.toStdString()) != -1)
        {
            PLC_Connected =! PLC_Connected;
            ui->toolButton_Connect_PLC->setText(QString::fromLocal8Bit("断开"));
            ui->lineEdit_PLC_Connect_IP->setEnabled(false);
            ui->lineEdit_PLC_Connect_Port->setEnabled(false);
            ui->label_Connect_PLC->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                                 "border:1px solid black;background:green");
        }
    }
}

void MainWindow::on_toolButton_Connect_Sensor_clicked()
{
    if(Sensor_Connected)
    {
        //关闭PLC
        sensor->Stcp->DiscTCP();
        Sensor_Connected =! Sensor_Connected;
        ui->lineEdit_Sensor_Connect_IP->setEnabled(true);
        ui->lineEdit_Sensor_Connect_Port->setEnabled(true);
        ui->toolButton_Connect_Sensor->setText(QString::fromLocal8Bit("连接"));
        ui->label_Connect_Sensor->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                             "border:1px solid black;background:red");
    }
    else
    {
        sensor_Address.ip = ui->lineEdit_Sensor_Connect_IP->text();
        sensor_Address.port = ui->lineEdit_Sensor_Connect_Port->text();
        if( sensor->Stcp->InitTCP(sensor_Address.ip.toStdString().c_str(),sensor_Address.port.toInt()) == 1)
        {
            Sensor_Connected =! Sensor_Connected;
            ui->toolButton_Connect_Sensor->setText(QString::fromLocal8Bit("断开"));
            ui->lineEdit_Sensor_Connect_IP->setEnabled(false);
            ui->lineEdit_Sensor_Connect_Port->setEnabled(false);
            ui->label_Connect_Sensor->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                                 "border:1px solid black;background:green");
        }
    }
}

void MainWindow::UIInit()
{
    /** 连接设置 */
    ui->lineEdit_PLC_Connect_IP->setText(plc_Address.ip);
    ui->lineEdit_PLC_Connect_Port->setText(plc_Address.port);
    ui->lineEdit_Sensor_Connect_IP->setText(sensor_Address.ip);
    ui->lineEdit_Sensor_Connect_Port->setText(sensor_Address.port);
    ui->lineEdit_Camera_Connect_IP->setText(select_camera);
    ui->lineEdit_Robot_Connect_Port->setText(robot_Address.port);
    ui->lineEdit_Robot_Connect_IP->setText(robot_Address.ip);
    on_toolButton_Connect_PLC_clicked();
    on_toolButton_Connect_Sensor_clicked();
    on_toolButton_Connect_Robot_clicked();
    on_toolButton_Connect_Camera_clicked();
    if(!Point_Move)
    {
        ui->Minius_A->setEnabled(false);
        ui->Minius_B->setEnabled(false);
        ui->Minius_C->setEnabled(false);
        ui->Minius_X->setEnabled(false);
        ui->Minius_Y->setEnabled(false);
        ui->Minius_Z->setEnabled(false);
        ui->Plus_A->setEnabled(false);
        ui->Plus_B->setEnabled(false);
        ui->Plus_C->setEnabled(false);
        ui->Plus_X->setEnabled(false);
        ui->Plus_Y->setEnabled(false);
        ui->Plus_Z->setEnabled(false);
        ui->Zero_A->setEnabled(false);
        ui->Zero_B->setEnabled(false);
        ui->Zero_C->setEnabled(false);
        ui->Zero_X->setEnabled(false);
        ui->Zero_Y->setEnabled(false);
        ui->Zero_Z->setEnabled(false);
        ui->Zero_All->setEnabled(false);
        ui->Minius_A_2->setEnabled(false);
        ui->Minius_B_2->setEnabled(false);
        ui->Minius_C_2->setEnabled(false);
        ui->Minius_X_2->setEnabled(false);
        ui->Minius_Y_2->setEnabled(false);
        ui->Minius_Z_2->setEnabled(false);
        ui->Plus_A_2->setEnabled(false);
        ui->Plus_B_2->setEnabled(false);
        ui->Plus_C_2->setEnabled(false);
        ui->Plus_X_2->setEnabled(false);
        ui->Plus_Y_2->setEnabled(false);
        ui->Plus_Z_2->setEnabled(false);
        ui->Zero_A_2->setEnabled(false);
        ui->Zero_B_2->setEnabled(false);
        ui->Zero_C_2->setEnabled(false);
        ui->Zero_X_2->setEnabled(false);
        ui->Zero_Y_2->setEnabled(false);
        ui->Zero_Z_2->setEnabled(false);
        ui->Zero_All_2->setEnabled(false);
    }
    /** 连接设置 */
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("10");
    ui->comboBox->addItem("100");
    ui->comboBox->addItem("1000");
    ui->comboBox->addItem("10000");
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox_2->addItem("1");
    ui->comboBox_2->addItem("10");
    ui->comboBox_2->addItem("100");
    ui->comboBox_2->addItem("1000");
    ui->comboBox_2->addItem("10000");
    ui->comboBox_2->setCurrentIndex(0);
    ui->toolButton_Sensor_Calculate->setEnabled(false);
    ui->toolButton_Sensor_Compensate->setEnabled(false);


}

/** 需要改*/
void MainWindow::on_toolButton_Connect_Robot_clicked()
{
    if(Robot_Connected)
    {
        //关闭机器人需要你写
//        sensor->Stcp->DiscTCP();


        //UI逻辑
        Robot_Connected =! Robot_Connected;
        ui->lineEdit_Robot_Connect_IP->setEnabled(true);
        ui->lineEdit_Robot_Connect_Port->setEnabled(true);
        ui->toolButton_Connect_Robot->setText(QString::fromLocal8Bit("连接"));
        ui->label_Connect_Robot->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                             "border:1px solid black;background:red");
    }
    else
    {
        robot_Address.ip = ui->lineEdit_Robot_Connect_IP->text();
        robot_Address.port = ui->lineEdit_Robot_Connect_Port->text();
        /** IF内的条件需要改*/
        if( sensor->Stcp->InitTCP(robot_Address.ip.toStdString().c_str(),robot_Address.port.toInt()) == 1) //机器人连接并且能够判定状态
        {
            Robot_Connected =! Robot_Connected;
            ui->toolButton_Connect_Robot->setText(QString::fromLocal8Bit("断开"));
            ui->lineEdit_Robot_Connect_IP->setEnabled(false);
            ui->lineEdit_Robot_Connect_Port->setEnabled(false);
            ui->label_Connect_Robot->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                                 "border:1px solid black;background:green");
        }
    }
}

void MainWindow::on_toolButton_Connect_Camera_clicked()
{
    if(camera_Connected)
    {
        //关闭相机
        camera->closeCamera();
        camera_Connected =! camera_Connected;
        ui->lineEdit_Camera_Connect_IP->setEnabled(true);
        ui->toolButton_Connect_Camera->setText(QString::fromLocal8Bit("连接"));
        ui->label_Connect_Camera->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                             "border:1px solid black;background:red");
    }
    else
    {
        select_camera = ui->lineEdit_Camera_Connect_IP->text();
        connectCamera();
        if(camera_Connected)
        {
            ui->toolButton_Connect_Camera->setText(QString::fromLocal8Bit("断开"));
            ui->lineEdit_Camera_Connect_IP->setEnabled(false);
            ui->label_Connect_Camera->setStyleSheet("min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:15px;"
                                                 "border:1px solid black;background:green");
        }
    }
}

/** 一系列按钮事件 */
void MainWindow::on_Plus_X_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_X->stepUp();
        //添加执行程序doublespinbox_x
        //建议写成一上传函数重复调用
    }
    //主界面的机器人控制程序
    else
    {
       ui->doubleSpinBox_Position_X_3->stepUp();
       //添加执行程序doublespinbox_x_3的值注意区分
    }



}

void MainWindow::on_Minius_X_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_X->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_X_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Plus_Y_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_Y->stepUp();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_Y_3->stepUp();
        //添加执行程序
    }

}

void MainWindow::on_Minius_Y_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_Y->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_Y_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Plus_Z_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_Z->stepUp();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_Z_3->stepUp();
        //添加执行程序
    }

}

void MainWindow::on_Minius_Z_clicked()
{
    //测试界面的机器人控制程序
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_Z->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_Z_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Plus_A_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_A->stepUp();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_A_3->stepUp();
        //添加执行程序
    }

}

void MainWindow::on_Minius_A_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_A->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_A_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Plus_B_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_B->stepUp();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_B_3->stepUp();
        //添加执行程序
    }

}

void MainWindow::on_Minius_B_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_B->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_B_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Plus_C_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_C->stepUp();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_C_3->stepUp();
        //添加执行程序
    }

}

void MainWindow::on_Minius_C_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        ui->doubleSpinBox_Position_C->stepDown();
        //添加执行程序
    }
    //主界面的机器人控制程序
    else
    {
        ui->doubleSpinBox_Position_C_3->stepDown();
        //添加执行程序
    }

}

void MainWindow::on_Zero_X_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_X->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_X_3->setValue(0);
    }

}

void MainWindow::on_Zero_Y_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_Y->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_Y_3->setValue(0);
    }

}

void MainWindow::on_Zero_Z_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_Z->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_Z_3->setValue(0);
    }

}

void MainWindow::on_Zero_A_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_A->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_A_3->setValue(0);
    }

}

void MainWindow::on_Zero_B_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_B->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_B_3->setValue(0);
    }

}

void MainWindow::on_Zero_C_clicked()
{
    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_C->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_C_3->setValue(0);
    }

}

void MainWindow::on_Zero_All_clicked()
{

    if(ui->tabWidget->currentIndex() == 0)
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_X->setValue(0);
        ui->doubleSpinBox_Position_Y->setValue(0);
        ui->doubleSpinBox_Position_Z->setValue(0);
        ui->doubleSpinBox_Position_A->setValue(0);
        ui->doubleSpinBox_Position_B->setValue(0);
        ui->doubleSpinBox_Position_C->setValue(0);
    }
    //主界面的机器人控制程序
    else
    {
        //需要改到初始位，并且能够上传
        ui->doubleSpinBox_Position_X_3->setValue(0);
        ui->doubleSpinBox_Position_Y_3->setValue(0);
        ui->doubleSpinBox_Position_Z_3->setValue(0);
        ui->doubleSpinBox_Position_A_3->setValue(0);
        ui->doubleSpinBox_Position_B_3->setValue(0);
        ui->doubleSpinBox_Position_C_3->setValue(0);
    }



}

void MainWindow::InitTree()
{
    //1，QTreeView常用设置项
    QTreeView* t = ui->treeView;
    t->setEditTriggers(QTreeView::NoEditTriggers);			//单元格不能编辑
    t->setSelectionBehavior(QTreeView::SelectRows);			//一次选中整行
    t->setSelectionMode(QTreeView::SingleSelection);        //单选，配合上面的整行就是一次选单行
//    t->setAlternatingRowColors(true);                       //每间隔一行颜色不一样，当有qss时该属性无效
    t->setFocusPolicy(Qt::NoFocus);                         //去掉鼠标移到单元格上时的虚线框
    //////////////////////////////////////////
    QTreeView* tpoint = ui->treeView_Point;
    tpoint->setEditTriggers(QTreeView::NoEditTriggers);			//单元格不能编辑
    tpoint->setSelectionBehavior(QTreeView::SelectRows);			//一次选中整行
    tpoint->setSelectionMode(QTreeView::SingleSelection);        //单选，配合上面的整行就是一次选单行
    tpoint->setAlternatingRowColors(true);                       //每间隔一行颜色不一样，当有qss时该属性无效
    tpoint->setFocusPolicy(Qt::NoFocus);                         //去掉鼠标移到单元格上时的虚线框
    //2，列头相关设置
    t->setHeaderHidden(true);
//    t->header()->setHighlightSections(true);                //列头点击时字体变粗，去掉该效果
//    t->header()->setDefaultAlignment(Qt::AlignCenter);      //列头文字默认居中对齐
//    t->header()->setDefaultSectionSize(100);                //默认列宽100
//    t->header()->setStretchLastSection(true);               //最后一列自适应宽度
//    t->header()->setSortIndicator(0,Qt::AscendingOrder);    //按第1列升序排序
    /////////////////////////////////
    tpoint->header()->setSectionResizeMode(QHeaderView::Stretch);
    tpoint->header()->setHighlightSections(true);                //列头点击时字体变粗，去掉该效果
    tpoint->header()->setDefaultAlignment(Qt::AlignCenter);      //列头文字默认居中对齐
//    tpoint->header()->setDefaultSectionSize(100);                //默认列宽100
//    tpoint->header()->setStretchLastSection(true);               //最后一列自适应宽度
    tpoint->header()->setSortIndicator(0,Qt::AscendingOrder);    //按第1列升序排序
    //3，构造Model
            //设置列头
    QStringList headers;
    headers << QString::fromLocal8Bit("图片名");
    mModel = new QStandardItemModel(ui->treeView);
    mModel->setHorizontalHeaderLabels(headers);
    //////////////
    QStringList headers_P;
    headers_P << QString::fromLocal8Bit("编号")<<QString::fromLocal8Bit("X轴坐标")
              <<QString::fromLocal8Bit("Y轴坐标")<<QString::fromLocal8Bit("Z轴坐标");
    mPModel = new QStandardItemModel(ui->treeView_Point);
    mPModel->setHorizontalHeaderLabels(headers_P);
    //设置数据//遍历父类容器，配置树节点主控件
    for(std::vector<QString>::iterator it = picsNames.begin(); it!=picsNames.end();it++){
        QStandardItem* itemMain = new QStandardItem((*it));
//                itemMain->setData(MARK_FOLDER,ROLE_MARK);
        itemFirstmap[(*it)] = itemMain; //数据map将名字与 树控件单元进行匹配创建字典
        mModel->appendRow(itemMain);
    }
    //////////////////
    for(std::vector<PointCoordinate>::iterator it = PointsSaved.begin(); it!=PointsSaved.end();it++)
    {
        QStandardItem* itemMain = new QStandardItem(QString::number((*it).num));
        PointFirstmap[(*it).num] = itemMain; //数据map将名字与 树控件单元进行匹配创建字典
        qDebug()<<"input points "<<(*it).num<<(*it).angle_x;
        mPModel->appendRow(itemMain);
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),1,new QStandardItem(QString::number((*it).angle_x,10,3)));
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),2,new QStandardItem(QString::number((*it).angle_y,10,3)));
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),3,new QStandardItem(QString::number((*it).angle_z,10,3)));
    }
    //4，应用model
    t->setModel(mModel);
    ////////
    QStandardItem* newitem = new QStandardItem(QString::number(123));
    mPModel->appendRow(newitem);
    mPModel->setItem(mPModel->indexFromItem(newitem).row(),1,new QStandardItem(QString::number(123.1234,10,3)));
    mPModel->setItem(mPModel->indexFromItem(newitem).row(),2,new QStandardItem(QString::number(123.1234,10,3)));
    mPModel->setItem(mPModel->indexFromItem(newitem).row(),3,new QStandardItem(QString::number(123.1234,10,3)));
    tpoint->setModel(mPModel);
//    //5, 信号槽，右键菜单
//    t->setContextMenuPolicy(Qt::CustomContextMenu);
//    connect(t, &QTreeView::customContextMenuRequested, this, &MainWindow::slotTreeMenu);
}
void MainWindow::InitPics()
{
    QDir dir(camera_Save_address);
    if(!dir.exists())
        return;
    //查看路径中后缀为.cfg格式的文件
    QStringList filters;
    filters<<QString("*.PNG")<<QString("*.jpg");
    dir.setFilter(QDir::Files | QDir::NoSymLinks); //设置类型过滤器，只为文件格式
    dir.setNameFilters(filters);  //设置文件名称过滤器，只为filters格式
    //统计cfg格式的文件个数
    int dir_count = dir.count();
    if(dir_count <= 0)
        {
            return;
        }

    //  //测试
    //  //文件路径及名称
    //  QFile outFile( "filename.txt");
    //  //看能否打开
    //  if(!outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    //      return ;
    //  QTextStream ts(&outFile);
        //存储文件名称
    for(int i=0; i<dir_count; i++)
    {
        QString file_name = dir[i];  //文件名称
        //ts<<file_name<<"\r\n"<<"\r\n";
       picsNames.emplace_back(file_name);
        }
    }
void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QString t = ui->treeView->model()->itemData(index).values()[0].toString();
    QString filename = camera_Save_address + "/" +t;
    if(!camera_Clicked)
    {
        if(!filename.isEmpty())
           {
               QPixmap pix;
//               ui->picture->setGeometry(10,10,1409,615);
               QImage image(filename);
               pix = QPixmap::fromImage(image);
               pix.scaled(ui->picture->size(), Qt::IgnoreAspectRatio );
               ui->picture->setScaledContents(true);
               ui->picture->setPixmap(pix);
           }
    }
    else
    {
        QMessageBox::warning(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("相机已开启，请先关闭相机"), QMessageBox::Yes);
    }

//    qDebug()<<filename;
}

void MainWindow::on_delete_2_clicked()
{
    if(picsNames.size()!=0)
    {
        QModelIndex curIndex = ui->treeView->currentIndex();      //当前点击的元素的index
        QString t = ui->treeView->model()->itemData(curIndex).values()[0].toString();
        QString filename = camera_Save_address + "/" +t;
        QMessageBox:: StandardButton result = QMessageBox::warning(NULL, QStringLiteral("Warning"), QString::fromUtf8("你确定要删除吗？"), QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::No);
        switch (result)
        {
        case QMessageBox::Yes:
        {
            //如果输入的值为光源
    //                    QString t = ui->treeView->model()->itemData(curIndex).values()[0].toString();
            for(vector<QString>::iterator it = picsNames.begin(); it != picsNames.end();it++ )  //删除子节点数据
                {
                    if((*it) == t){
                        itemFirstmap.erase((*it));  //清除模型Map函数数据
                        mModel->removeRow(curIndex.row(),curIndex.parent()); //清除树节点数据
                        QDir dir(camera_Save_address);
                           if (!dir.exists())
                               return;
                           dir.remove(t);
    //                       QFileInfoList fileList = dir.entryInfoList();
    //                       foreach(QFileInfo fi, fileList)
    //                       {
    //                           if (fi.isFile())
    //                               fi.dir().remove(fi.fileName());
    //                       }
                        if(it == picsNames.end()-1)
                        {
                           picsNames.pop_back();
                           break;
                        }
                        else{
                           it = picsNames.erase(it);  //清除模型数据
                           break;  //提前结束提高效率
                        }

                    }
               }
            //itemmap.erase(ui->treeView->get)
            break;
        }
        case QMessageBox::No:
            break;
        default:
            break;
        }

    }
    else
    {
        QMessageBox::warning(NULL, QStringLiteral("Warning"), QString::fromLocal8Bit("没有选中或不存在图片"), QMessageBox::Yes ,
                                                  QMessageBox::Yes);
    }

}

void MainWindow::on_toolButton_Camera_Shot_clicked()
{
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyyMMddhhmmss");
    QString current_path = camera_Save_address+"/"+current_date+".PNG";
    qDebug()<<current_path;
    if(m_camera.count() != 0)
    {
        if(camera_Clicked)
        {
            //            if( camera->state() ==  QCamera::ActiveState)//摄像头开启状态下才抓拍
            //                {
                        QPixmap pixmap = ui->picture->grab();//将widget内容保存为pixmap图像信息
                        pixmap.save(current_path);//保存为指定目录图像
            //                }
                        QStandardItem* itemMain = new QStandardItem(current_date);
                    //                itemMain->setData(MARK_FOLDER,ROLE_MARK);
                        itemFirstmap[current_date] = itemMain; //数据map将名字与 树控件单元进行匹配创建字典
                        mModel->appendRow(itemMain);
                        picsNames.emplace_back(current_date);
        }
    }
}

void MainWindow::on_CameraShot_clicked()
{
    if(!camera_Clicked){
       camera->startCamera();
       myThread->start();
//         图标变化
       QIcon video_Stop(":/icons/icons/video_Stop.svg");
       ui->CameraShot->setIcon(video_Stop);
       ui->CameraShot->setIconSize(QSize(60, 60));
    }
    else{
         camera->stopCamera();
         myThread->stop();
         myThread->quit();
         myThread->wait();
//         图标变化
         QIcon video_Start(":/icons/icons/video_Start.svg");
         ui->CameraShot->setIcon(video_Start);
         ui->CameraShot->setIconSize(QSize(60, 60));
    }
    camera_Clicked = !camera_Clicked;


}

void MainWindow::on_Zoom_in_clicked()
{
    if(camera->getWidth()>=648)
        {
        camera->setWidth(camera->getWidth()-162);
        camera->setHeight(camera->getWidth()-128);
    }
}

void MainWindow::on_Zoom_out_clicked()
{
    if(camera->getWidth() <= 2430)
        {
        camera->setWidth(camera->getWidth()+162);
        camera->setHeight(camera->getWidth()+128);
    }
}

void MainWindow::on_caculate_clicked()
{

}

void MainWindow::on_point_Remove_clicked()
{
    QModelIndex curIndex = ui->treeView_Point->currentIndex();      //当前点击的元素的index
    QModelIndex index = curIndex.sibling(curIndex.row(),0); //该行的第1列元素的index
    int t = ui->treeView_Point->model()->itemData(index).values()[0].toInt();
    if(index.row()==-1)        //如果没有选中树节点则提示需要选中节点
    {
        int war = QMessageBox::warning(NULL,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("请先选择标定点!"),QMessageBox::Yes,QMessageBox::Yes);
        if(war == QMessageBox::Yes)
            return;
    }
    int result = QMessageBox::warning(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("你确定要删除吗？"), QMessageBox::Yes | QMessageBox::No,
                                              QMessageBox::No);
    if(result == QMessageBox::Yes)
    {
        //如果输入的值为光源
//                    QString t = ui->treeView->model()->itemData(curIndex).values()[0].toString();
        for(vector<PointCoordinate>::iterator it = PointsSaved.begin(); it != PointsSaved.end();it++ )  //删除子节点数据
        {
            if((*it).num == t){
                PointFirstmap.erase((*it).num);  //清除模型Map函数数据
                mPModel->removeRow(index.row(),index.parent()); //清除树节点数据
                if(it == PointsSaved.end()-1)
                {
                   PointsSaved.pop_back();
                   break;
                }
                else
                {
                   it = PointsSaved.erase(it);  //清除模型数据
                   break;  //提前结束提高效率
                }
            }
        }
    }
}

void MainWindow::on_point_Add_clicked()
{
    int p =0 ;
    bool find =false;
    for ( int inn = 1; inn<=100;inn++)
    {
        for(vector<PointCoordinate>::iterator it = PointsSaved.begin(); it != PointsSaved.end();it++ )  //删除子节点数据
        {
            if((*it).num == inn)
            {
                break;
            }
            else
            {
                if(it== PointsSaved.end()-1)
                {
                    p = inn ;
                    find = true;

                }
            }
        }
        if(find)
        {
            break;
        }
    }

    addpoint = new AddPoint(this, p);
    connect(addpoint, SIGNAL(pointData(bool,PointCoordinate)),	// vector等复杂数据类型不可以
        this, SLOT(updateTree(bool,PointCoordinate)));
    addpoint->setModal(true);
    addpoint->exec();
    disconnect(addpoint, SIGNAL(pointData(bool,PointCoordinate)),	// vector等复杂数据类型不可以
        this, SLOT(updateTree(bool,PointCoordinate)));
    delete addpoint;
    addpoint =nullptr;


}

void MainWindow::Connections()
{
    //线程结束后发送信号，对结果进行处理
    connect(myThread,SIGNAL(mess()),this,SLOT(display()));
    //标定点修改窗口
//    connect(addpoint, SIGNAL(pointData(bool,PointCoordinate)),	// vector等复杂数据类型不可以
//        this, SLOT(updateTree(bool,PointCoordinate)));
    //主窗口机器人控制接口配置
    connect(ui->Zero_All_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_All_clicked()));
    connect(ui->Plus_X_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_X_clicked()));
    connect(ui->Minius_X_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_X_clicked()));
    connect(ui->Plus_Y_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_Y_clicked()));
    connect(ui->Minius_Y_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_Y_clicked()));
    connect(ui->Plus_Z_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_Z_clicked()));
    connect(ui->Minius_Z_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_Z_clicked()));
    connect(ui->Plus_A_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_A_clicked()));
    connect(ui->Minius_A_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_A_clicked()));
    connect(ui->Plus_B_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_B_clicked()));
    connect(ui->Minius_B_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_B_clicked()));
    connect(ui->Plus_C_2 ,SIGNAL(clicked()),this,SLOT(on_Plus_C_clicked()));
    connect(ui->Minius_C_2 ,SIGNAL(clicked()),this,SLOT(on_Minius_C_clicked()));
    connect(ui->Zero_X_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_X_clicked()));
    connect(ui->Zero_Y_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_Y_clicked()));
    connect(ui->Zero_Z_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_Z_clicked()));
    connect(ui->Zero_A_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_A_clicked()));
    connect(ui->Zero_B_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_B_clicked()));
    connect(ui->Zero_C_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_C_clicked()));
    connect(ui->Zero_All_2 ,SIGNAL(clicked()),this,SLOT(on_Zero_All_clicked()));
    connect(ui->toolButton_MovePattern_2 ,SIGNAL(clicked()),this,SLOT(on_toolButton_MovePattern_clicked()));
}

void MainWindow::updateTree(bool a,PointCoordinate b)
{
    if(a)
    {
        QStandardItem* itemMain = new QStandardItem(QString::number(b.num) );
        PointFirstmap[b.num] = itemMain; //数据map将名字与 树控件单元进行匹配创建字典
        mPModel->appendRow(itemMain);
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),1,new QStandardItem(QString::number(b.angle_x,10,3)));
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),2,new QStandardItem(QString::number(b.angle_y,10,3)));
        mPModel->setItem(mPModel->indexFromItem(itemMain).row(),3,new QStandardItem(QString::number(b.angle_z,10,3)));
        PointsSaved.emplace_back(b);
    }
    else
    {
        PointFirstmap[b.num]->setText(QString::number(b.num));
        mPModel->item(mPModel->indexFromItem(PointFirstmap[b.num]).row(),1)->setText(QString::number(b.angle_x,10,3));
        mPModel->item(mPModel->indexFromItem(PointFirstmap[b.num]).row(),2)->setText(QString::number(b.angle_y,10,3));
        mPModel->item(mPModel->indexFromItem(PointFirstmap[b.num]).row(),3)->setText(QString::number(b.angle_z,10,3));
        for(vector<PointCoordinate>::iterator it = PointsSaved.begin(); it != PointsSaved.end();it++ )  //删除子节点数据
        {
            if((*it).num == b.num)
            {
                (*it).angle_x = b.angle_x;
                (*it).angle_y = b.angle_y;
                (*it).angle_z = b.angle_z;
            }
        }
    }

}//更新点

void MainWindow::on_point_Change_clicked()
{
    QModelIndex curIndex = ui->treeView_Point->currentIndex();      //当前点击的元素的index
    QModelIndex index = curIndex.sibling(curIndex.row(),0); //该行的第1列元素的index
    if(index.row()==-1)        //如果没有选中树节点则提示需要选中节点
    {
        int war = QMessageBox::warning(NULL,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("请先选择标定点!"),QMessageBox::Yes,QMessageBox::Yes);
        if(war == QMessageBox::Yes)
            return;
    }
    int t = ui->treeView_Point->model()->itemData(index).values()[0].toInt();

    int result = QMessageBox::warning(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("你确定要修改吗？"), QMessageBox::Yes | QMessageBox::No,
                                              QMessageBox::No);
    if(result == QMessageBox::Yes)
    {
        //如果输入的值为光源
//                    QString t = ui->treeView->model()->itemData(curIndex).values()[0].toString();
        for(vector<PointCoordinate>::iterator it = PointsSaved.begin(); it != PointsSaved.end();it++ )  //删除子节点数据
        {
            if((*it).num == t){
                addpoint = new AddPoint(this, (*it));
                connect(addpoint, SIGNAL(pointData(bool,PointCoordinate)),	// vector等复杂数据类型不可以
                    this, SLOT(updateTree(bool,PointCoordinate)));
                addpoint->setModal(true);
                addpoint->exec();
                disconnect(addpoint, SIGNAL(pointData(bool,PointCoordinate)),	// vector等复杂数据类型不可以
                    this, SLOT(updateTree(bool,PointCoordinate)));
                delete addpoint;
                addpoint =nullptr;
                break;
            }
        }
    }
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    ui->doubleSpinBox_Position_X_3->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_Y_3->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_Z_3->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_A_3->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_B_3->setSingleStep(arg1.toDouble()*0.001);
    ui->doubleSpinBox_Position_C_3->setSingleStep(arg1.toDouble()*0.001);
}
