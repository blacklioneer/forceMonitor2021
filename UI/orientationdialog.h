#ifndef ORIENTATIONDIALOG_H
#define ORIENTATIONDIALOG_H

#include <QDialog>
#include <QStandardItemModel>
#include <vector>
#include "camerathread.h" //相机线程
#include "hikvisonsdk.h"    //海康相机模块集成
#include "variables.h"

using namespace std;
namespace Ui {
class OrientationDialog;
}


class OrientationDialog : public QDialog
{
    Q_OBJECT

public:
    OrientationDialog(QWidget *parent = nullptr, CameraThread* mThread = nullptr,MvCameras* mcamera= nullptr,Mat* mImage= nullptr);
    ~OrientationDialog();
    void InitTree();
    void InitPics();
    void display(); //相机图像显示
    //用于显示单张图像
    void display(const Mat* image);
private slots:
    void on_treeView_clicked(const QModelIndex &index);
    void on_delete_2_clicked();
    void on_shot_clicked();
    void on_CameraShot_clicked();
    void on_Zoom_in_clicked();

    void on_Zoom_out_clicked();

//signals:
//    // 发送视频采集信号触发线程
//    void operateCamera();
//    void stopCamera();

private:
    bool camera_clicked = false;
    Ui::OrientationDialog *ui;
    QStandardItemModel* mModel;
    /** 树控件第一级节点表 */
    map<QString,QStandardItem*> itemFirstmap;
    vector<QString> picsNames;
    //相机指针
    MvCameras* camera = nullptr;
    //线程对象
    CameraThread* myThread = nullptr;
    //用于保存图像的图像指针对象
    Mat* myImage = nullptr;



};

#endif
