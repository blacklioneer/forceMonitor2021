#include "orientationdialog.h"
#include "ui_orientationdialog.h"
#include <QDir>
#include <QMessageBox>
#include <QDateTime>
#define ROLE_MARK Qt::UserRole + 1
#define MARK_FOLDER 2 //这是文件夹标记
#define MARK_ITEM 3 //条目标记

OrientationDialog::OrientationDialog(QWidget *parent,CameraThread* mThread,MvCameras* mcamera,Mat* mImage) :
    QDialog(parent)
{
    ui = new Ui::OrientationDialog;
    ui->setupUi(this);
    InitPics();
    InitTree();
    camera= mcamera,
    myThread = mThread,
    myImage = mImage,
    //将线程中的信号与槽进行连接
    connect(myThread,SIGNAL(mess()),this,SLOT(display()));
}
OrientationDialog::~OrientationDialog()
{
    camera_clicked = false;
    on_CameraShot_clicked();
    camera->setWidth(1944);
    camera->setHeight(1536);
    camera = nullptr;
    myThread = nullptr;
    myImage = nullptr;
    delete ui;
}
void OrientationDialog::InitTree()
{
    //1，QTreeView常用设置项
    QTreeView* t = ui->treeView;
    t->setEditTriggers(QTreeView::NoEditTriggers);			//单元格不能编辑
    t->setSelectionBehavior(QTreeView::SelectRows);			//一次选中整行
    t->setSelectionMode(QTreeView::SingleSelection);        //单选，配合上面的整行就是一次选单行
    t->setAlternatingRowColors(true);                       //每间隔一行颜色不一样，当有qss时该属性无效
    t->setFocusPolicy(Qt::NoFocus);                         //去掉鼠标移到单元格上时的虚线框
    //2，列头相关设置
    t->header()->setHighlightSections(true);                //列头点击时字体变粗，去掉该效果
    t->header()->setDefaultAlignment(Qt::AlignCenter);      //列头文字默认居中对齐
    t->header()->setDefaultSectionSize(100);                //默认列宽100
    t->header()->setStretchLastSection(true);               //最后一列自适应宽度
    t->header()->setSortIndicator(0,Qt::AscendingOrder);    //按第1列升序排序
    //3，构造Model
            //设置列头
    QStringList headers;
    headers << QString::fromLocal8Bit("pics");
    mModel = new QStandardItemModel(ui->treeView);
    mModel->setHorizontalHeaderLabels(headers);
    //设置数据//遍历父类容器，配置树节点主控件
    for(std::vector<QString>::iterator it = picsNames.begin(); it!=picsNames.end();it++){
        QStandardItem* itemMain = new QStandardItem((*it));
//                itemMain->setData(MARK_FOLDER,ROLE_MARK);
        itemFirstmap[(*it)] = itemMain; //数据map将名字与 树控件单元进行匹配创建字典
        mModel->appendRow(itemMain);
    }
    //4，应用model
    t->setModel(mModel);
//    //5, 信号槽，右键菜单
//    t->setContextMenuPolicy(Qt::CustomContextMenu);
//    connect(t, &QTreeView::customContextMenuRequested, this, &MainWindow::slotTreeMenu);
}
void OrientationDialog::InitPics()
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
    void OrientationDialog::on_treeView_clicked(const QModelIndex &index)
    {
        QString t = ui->treeView->model()->itemData(index).values()[0].toString();
        QString filename = camera_Save_address + "/" +t;
        if(!camera_clicked)
        {
            if(!filename.isEmpty())
               {
                   QPixmap pix;
                   ui->picture->setGeometry(10,10,800,550);
                   QImage image(filename);
                   pix = QPixmap::fromImage(image);
                   pix.scaled(ui->picture->size(), Qt::KeepAspectRatio);
                   ui->picture->setScaledContents(true);
                   ui->picture->setPixmap(pix);
               }
        }
        else
        {
            QMessageBox::warning(NULL, QStringLiteral("Warning"), QString::fromUtf8("相机已开启，请先关闭相机"), QMessageBox::Yes);
        }

    //    qDebug()<<filename;
    }
    void OrientationDialog::on_delete_2_clicked()
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
    void OrientationDialog::on_shot_clicked()
    {
        QDateTime current_date_time =QDateTime::currentDateTime();
        QString current_date =current_date_time.toString("yyyyMMddhhmmss");
        QString current_path = camera_Save_address+"/"+current_date+".PNG";
        qDebug()<<current_path;
        if(m_camera.count() != 0)
        {
            if(camera_clicked)
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

void OrientationDialog::display()
{
    //判断是黑白、彩色图像
    QImage* QmyImage=new QImage();
    if(myImage->channels()>1)
    {
        *QmyImage=QImage((const unsigned char*)(myImage->data),myImage->cols, myImage->rows, QImage::Format_RGB888);
    }
    else
    {
        *QmyImage=QImage((const unsigned char*)(myImage->data),myImage->cols, myImage->rows, QImage::Format_Indexed8);
    }

    *QmyImage = (*QmyImage).scaled(ui->picture->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    //显示图像
    ui->picture->setPixmap(QPixmap::fromImage(*QmyImage));
    delete QmyImage;
}

void OrientationDialog::on_CameraShot_clicked()
{
    if(!camera_clicked){
       camera->startCamera();
       myThread->start();
//         图标变化
       QIcon video_Stop(":/icons/icons/video_Stop.svg");
       ui->CameraShot->setIcon(video_Stop);
       ui->CameraShot->setIconSize(QSize(40, 40));
    }
    else{
         camera->stopCamera();
         myThread->stop();
         myThread->quit();
         myThread->wait();
//         图标变化
         QIcon video_Start(":/icons/icons/video_Start.svg");
         ui->CameraShot->setIcon(video_Start);
         ui->CameraShot->setIconSize(QSize(40, 40));
    }
    camera_clicked = !camera_clicked;
}

void OrientationDialog::on_Zoom_in_clicked()
{
    if(camera->getWidth()>=648)
        {
        camera->setWidth(camera->getWidth()-162);
        camera->setHeight(camera->getWidth()-128);
    }
}

void OrientationDialog::on_Zoom_out_clicked()
{
    if(camera->getWidth() <= 2430)
        {
        camera->setWidth(camera->getWidth()+162);
        camera->setHeight(camera->getWidth()+128);
    }
}
