#include "forceget.h"
#include "ui_forceget.h"

ForceGet::ForceGet(QWidget *parent, CSensor *sensor) :
    QDialog(parent),
    ui(new Ui::ForceGet),
    Sensor(sensor)
{
    ui->setupUi(this);
    ChartsInit();
    connect(Sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));
}

ForceGet::~ForceGet()
{
    disconnect(Sensor, SIGNAL(EmitXYZMxMyMz(int, double *, int)),	// vector等复杂数据类型不可以
        this, SLOT(UpdateXYZMxMyMz(int, double *, int)));

    delete seriesX;
    seriesX = nullptr;
    delete seriesY;
    seriesY = nullptr;
    delete seriesZ;
    seriesZ = nullptr;
    delete seriesMx;
    seriesMx = nullptr;
    delete seriesMy;
    seriesMy = nullptr;
    delete seriesMz;
    seriesMz = nullptr;
    delete chart_XYZ;
    chart_XYZ = nullptr;
    delete chart_MXYZ;
    chart_MXYZ = nullptr;
    Sensor->stop(true);
    Sensor->quit();
    Sensor->wait();
    delete ui;
}



void ForceGet::ChartsInit() {
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

    chart_XYZ->setTitle(QString::fromLocal8Bit( "力采集" ));	//标题

    chart_XYZ->createDefaultAxes();								//设置默认的坐标系，如果不设置程序是运行不了的
    //chart->axisX()->setRange(0, 100);						// x轴动态，放在槽函数里实时更新
    //chart->axisY()->setRange(-10, 20);						// y轴固定范围
    chart_XYZ->axes(Qt::Horizontal).first()->setTitleText(QString::fromLocal8Bit("时间")); //设置中文标题
    chart_XYZ->axes(Qt::Vertical).first()->setTitleText(QString::fromLocal8Bit("大小"));
    chart_XYZ->axes(Qt::Vertical).first()->setTitleBrush(Qt::darkMagenta);					//设置字色

    chart_MXYZ->setTheme(QChart::ChartThemeLight);				//主题

    chart_MXYZ->setTitle(QString::fromLocal8Bit( "力采集" ));	 //标题

    chart_MXYZ->createDefaultAxes(); 								//设置默认的坐标系，如果不设置程序是运行不了的
    //chart->axisX()->setRange(0, 100);						// x轴动态，放在槽函数里实时更新
    //chart->axisY()->setRange(-10, 20);						// y轴固定范围
    chart_MXYZ->axes(Qt::Horizontal).first()->setTitleText(QString::fromLocal8Bit("时间")); //设置中文标题
    chart_MXYZ->axes(Qt::Vertical).first()->setTitleText(QString::fromLocal8Bit("大小"));
    chart_MXYZ->axes(Qt::Vertical).first()->setTitleBrush(Qt::darkMagenta);					//设置字色

    ui->widget_Chart_Coordinate->setRenderHint(QPainter::Antialiasing);		//抗锯齿渲染
    ui->widget_Chart_Coordinate->setChart(chart_XYZ);            //将图表绑定到视图

    ui->widget_Chart_Angle->setRenderHint(QPainter::Antialiasing);		//抗锯齿渲染
    ui->widget_Chart_Angle->setChart(chart_MXYZ);            //将图表绑定到视图
}


void ForceGet::UpdateXYZMxMyMz(int t, double* vXYZMxMyMz, int n) {
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
        ui->lcdNumber_MX->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_MX->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[3]);
    ui->lcdNumber_MX->display(stTmp);

    if (std::abs(vXYZMxMyMz[4]) >= 20) {
        ui->lcdNumber_MY->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_MY->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[4]);
    ui->lcdNumber_MY->display(stTmp);

    if (std::abs(vXYZMxMyMz[5]) >= 20) {
        ui->lcdNumber_MZ->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
    } /** 还有问题没改进 **/
    else{
        ui->lcdNumber_MZ->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"));
    }
    stTmp = QString::number(vXYZMxMyMz[5]);
    ui->lcdNumber_MZ->display(stTmp);

    // todo 力数据异常，直接中断其他函数，抬高机械臂
//    if (std::abs(vXYZMxMyMz[0]) >= 200 || std::abs(vXYZMxMyMz[1]) >= 200 || std::abs(vXYZMxMyMz[2]) >= 200) {
//        ui->widget_Chart_Coordinate->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
//    } /** 还有问题没改进 **/
//    if (std::abs(vXYZMxMyMz[3]) >= 20 || std::abs(vXYZMxMyMz[4]) >= 15 || std::abs(vXYZMxMyMz[5]) >= 15) {
//        ui->widget_Chart_Angle->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0)\n"));
//    } /** 还有问题没改进 **/

    // 更新按钮状态
//    if (flagStartButton) {
//        ui.startButton->setEnabled(true);
//        ui.startButton->setText(u8"开始采集");
//        qApp->processEvents();
//    }
}


void ForceGet::on_checkBox_X_clicked()
{
    if (ui->checkBox_X->isChecked())	{
        seriesX->show();
    }
    else	{
        seriesX->hide();
    }
}

void ForceGet::on_checkBox_Y_clicked()
{
    if (ui->checkBox_Y->isChecked())	{
        seriesY->show();
    }
    else	{
        seriesY->hide();
    }
}

void ForceGet::on_checkBox_Z_clicked()
{
    if (ui->checkBox_Z->isChecked())	{
        seriesZ->show();
    }
    else	{
        seriesZ->hide();
    }
}

void ForceGet::on_checkBox_A_clicked()
{
    if (ui->checkBox_A->isChecked())	{
        seriesMx->show();
    }
    else	{
        seriesMx->hide();
    }
}

void ForceGet::on_checkBox_B_clicked()
{
    if (ui->checkBox_B->isChecked())	{
        seriesMy->show();
    }
    else	{
        seriesMy->hide();
    }
}

void ForceGet::on_checkBox_C_clicked()
{
    if (ui->checkBox_C->isChecked())	{
        seriesMz->show();
    }
    else	{
        seriesMz->hide();
    }
}


void ForceGet::on_pushButton_Sensor_Monitor_clicked()
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
            /** 嵌入你的运行代码 */

           Sensor->stop(monitor_Status); /** ture是停止采集，false是开始采集 **/
           Sensor->start(); /*开始采集传感器数据 */
    //         图标变化
           QIcon monitor_Stop(":/icons/icons/monitor0ffW.svg");
           ui->pushButton_Sensor_Monitor->setIcon(monitor_Stop);
           ui->pushButton_Sensor_Monitor->setIconSize(QSize(80, 80));
        }
        else{
            Sensor->stop(monitor_Status);
            Sensor->quit();
            Sensor->wait();
    //         图标变化
             QIcon monitor_Start(":/icons/icons/monitorOnW.svg");
             ui->pushButton_Sensor_Monitor->setIcon(monitor_Start);
             ui->pushButton_Sensor_Monitor->setIconSize(QSize(80, 80));

        }
        monitor_Status =! monitor_Status;
//    }
}



