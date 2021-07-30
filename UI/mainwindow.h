#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QCamera>
#include <QtCharts/QChart>
#include<QtCharts\QChartView>   //两个基本模块
#include<QtCharts\QSplineSeries>   //两个基本模块
#include<QSettings>
#include<QTreeView>
#include <QStandardItemModel>
//#include <QChart>
//#include <QtCharts>                   //添加命名空间
//using namespace QtCharts;   //QT_CHARTS_USE_NAMESPACE 需要在ui_xxx.h前面，因为ui_xxx.h也需要该宏

#include "../PLC/ModbusTCP.h"
#include "../Robot/RobotCtrl.h"
#include "sensor.h"
#include "camerathread.h" //相机线程
#include "hikvisonsdk.h"    //海康相机模块集成
#include "forceget.h"
#include "losscaculation.h"
#include "addpoint.h"
#include "camerasetting.h"

using namespace QtCharts;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connectCamera(); //相机连接代码块
    /** 相机标定模块树控件初始化 */
    void InitTree();
    /** 相机标定模块树控件初始化 */
    void InitPics();

private slots:
    void display(); //相机图像显示

    void updateTree(bool a,PointCoordinate b); //更新点

    void initCameraDeviceName();

    void ChartsInit();
        /** connect初始化 */
    void Connections();
        /** 读取文件配置程序 */
    void ReadSettings();
        /** 保存文件配置程序 */
    void WriteSettings();
    /** UI界面初始化 */
    void UIInit();

    void on_treeView_clicked(const QModelIndex &index);


    void on_toolButton_Camera_Start_clicked();/*相机开启事件*/

    void on_toolButton_Camera_Shot_clicked(); /*相机拍照事件*/

//    void on_pushButton_Force_Monitor_clicked(); /*力采集控制按钮*/

    void on_toolButton_clicked();

    
    /** 快换弹出程序 */
    void on_toolButton_PLC_QuickChange_clicked();
	/** 开灯程序 */
	void on_toolButton_PLC_Light_clicked();
	/** 单吸盘程序 */
    void on_pushButton_PLC_SingleGripper_clicked();
    /** 多吸盘程序 */
    void on_pushButton_PLC_MultiGripper_clicked();
	/** 拧紧程序 */
    void on_pushButton_PLC_Tighten_clicked();
    /** 吸钉程序 */
    void on_pushButton_PLC_SuckScrew_clicked();
        /** 真空器程序 */
    void on_pushButton_PLC_Vacuum_clicked();
        /** 破真空程序 */
    void on_pushButton_PLC_DestroyVacuum_clicked();
        /** 其他接口 */
    void on_toolButton_PLC_IO_clicked();

//    void CtrlRobot();

//    void CollectData();

    void UpdateXYZMxMyMz(int t, double* vXYZMxMyMz, int n);


    void on_checkBox_X_clicked();

    void on_checkBox_Y_clicked();

    void on_checkBox_Z_clicked();

    void on_checkBox_Mx_clicked();

    void on_checkBox_My_clicked();

    void on_checkBox_Mz_clicked();

    void on_actionCameraOrentation_triggered();


    void on_actionSettings_triggered();

//    /** 力传感器是否进行周边力采集的开关
//      * 输出状态参量为 Force_Around_Get  */
//    void on_pushButton_ForceSwitch_clicked();

    /** 力传感器是否开启监测
      * 参考状态参量 Force_Around_Get
      * Force_Around_Get 为 ture 执行周边力采集程序
      * false 只执行力传感器数据程序*/
    void on_toolButton_Sensor_Monitor_clicked();

    /** 标定程序嵌入 */
    void on_toolButton_Sensor_Demarcate_clicked();

    /** 补偿程序嵌入 */
    void on_toolButton_Sensor_Compensate_clicked();


    /** 机器人位姿参数传递程序 */
    void on_toolButton_Submit_clicked();

    void on_actionAround_ForceGet_triggered();

    void on_comboBox_currentTextChanged(const QString &arg1);
    /** 机器人运动方式 */
    void on_toolButton_MovePattern_clicked();
    /** 急停程序 */
    void on_toolButton_SuddenStop_clicked();


    /** 连接程序 */
    void on_toolButton_Sensor_Calculate_clicked();

    void on_toolButton_Connect_PLC_clicked();

    void on_toolButton_Connect_Sensor_clicked();

    void on_toolButton_Connect_Robot_clicked();

    void on_toolButton_Connect_Camera_clicked();

    /** 单步执行程序的，都需要修改 */
    void on_Plus_X_clicked();

    void on_Minius_X_clicked();

    void on_Plus_Y_clicked();

    void on_Minius_Y_clicked();

    void on_Plus_Z_clicked();

    void on_Minius_Z_clicked();

    void on_Plus_A_clicked();

    void on_Minius_A_clicked();

    void on_Plus_B_clicked();

    void on_Minius_B_clicked();

    void on_Plus_C_clicked();

    void on_Minius_C_clicked();

    void on_Zero_X_clicked();

    void on_Zero_Y_clicked();

    void on_Zero_Z_clicked();

    void on_Zero_A_clicked();

    void on_Zero_B_clicked();

    void on_Zero_C_clicked();

    void on_Zero_All_clicked();
        /** 单步执行程序 */

    void on_delete_2_clicked();

    void on_CameraShot_clicked();

    void on_caculate_clicked();
    /** 标定点操作程序 */

    void on_point_Remove_clicked();

    void on_point_Add_clicked();

    void on_point_Change_clicked();

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_toolButton_Settings_clicked();

    void on_toolButton_Sensor_Collect_clicked();

private:
    bool camera_Clicked = false; /*相机是否点选,false 表示未开启，true表示开启*/
    bool camera_Connected = false;/*相机是连接,false 表示未开启，true表示开启*/
    bool PLC_Connected = false;/*PLC是连接,false 表示未开启，true表示开启*/
    bool Sensor_Connected = false;/*PLC是连接,false 表示未开启，true表示开启*/
    bool Robot_Connected = false;/*PLC是连接,false 表示未开启，true表示开启*/
    bool monitor_Status = false; /* 力传感器监测状态*/
    bool PLC_Light = false; /* PLC灯光*/
    bool screw_Tighten = false; /*拧紧，*/
    bool Vacuum = false; /* PLC灯光*/
    bool DestroyVacuum = false; /*拧紧，*/
    bool screw_Suck = false; /*吸钉*/
    bool Force_Around_Get =false; /* 周边力采集控制是否开启*/
    bool paw_Num_One = false; /*单个爪*/
    bool paw_Num_Two = false; /*多个爪*/
    bool QChange = false; /*快换， false为拆 true为装*/
    bool QIO = false; /*其他IO口， false为拆 true为装*/
    bool Point_Move = false; /*机器人点动控制设定*/
    bool getpoint = false; /*判定是否传输了点*/
    bool shotclicked =false;/*判定是p拍照*/
    Ui::MainWindow *ui;
//    ConnectSettings *connectsettings;/*集成连接设置窗口*/
//    OrientationDialog *orientationdialog; /*相机标定窗口*/
//    QuickChangeControl *quickchangecontrol; /*快换控制窗口*/
    ForceGet *forcegetdialog; /** 周边力采集窗口*/
    LossCaculation *losscaculation; /** 误差计算弹出窗口*/
    AddPoint *addpoint; /** 标定点添加修改窗口*/
    CameraSetting *camerasetting; /** 相机配置窗口*/
    //用于显示单张图像
    void display(const Mat* image);
    //相机指针
    MvCameras* camera = nullptr;
    CameraThread* myThread = nullptr;
    //用于保存图像的图像指针对象
    Mat* myImage = nullptr;
//    QCamera* camera;//摄像头设备
    // 力传感器
    CSensor *sensor;
    // 机器人
    CRobotTCP *robot;
    // PLC
    ModbusTCP *plc;
    // charts 定义曲线
    QChart* chart_XYZ;               //图表对象
    QChart* chart_MXYZ;               //图表对象

    QSplineSeries *seriesX;     //创建曲线1
    QSplineSeries *seriesY;     //创建曲线2
    QSplineSeries *seriesZ;     //创建曲线3
    QSplineSeries *seriesMx;     //创建曲线4
    QSplineSeries *seriesMy;     //创建曲线5
    QSplineSeries *seriesMz;
    //创建曲线6
    /** 树控件相关部件 */
    QStandardItemModel* mModel;
    QStandardItemModel* mPModel;
    /** 树控件第一级节点表 */
    map<QString,QStandardItem*> itemFirstmap;
    vector<QString> picsNames;
    /** 标定点节点数据 */
        /*新点坐标值*/
    PointCoordinate changedPoints;
    vector<PointCoordinate> PointsSaved;
    map<int,QStandardItem*> PointFirstmap;

signals:
        // 发送视频采集信号触发线程
        void operateCamera();
        void stopCamera();
};
#endif // MAINWINDOW_H
