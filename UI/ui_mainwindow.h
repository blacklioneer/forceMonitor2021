/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCameraOrentation;
    QAction *actionAround_ForceGet;
    QAction *actionSettings;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_test;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget_2;
    QWidget *tabWidget_Settings;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_Connection;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_50;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_39;
    QLineEdit *lineEdit_PLC_Connect_IP;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_40;
    QLineEdit *lineEdit_PLC_Connect_Port;
    QToolButton *toolButton_Connect_PLC;
    QLabel *label_Connect_PLC;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_57;
    QWidget *widget_47;
    QHBoxLayout *horizontalLayout_58;
    QLabel *label_51;
    QLineEdit *lineEdit_Sensor_Connect_IP;
    QWidget *widget_48;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_52;
    QLineEdit *lineEdit_Sensor_Connect_Port;
    QToolButton *toolButton_Connect_Sensor;
    QLabel *label_Connect_Sensor;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_54;
    QWidget *widget_45;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_48;
    QLineEdit *lineEdit_Robot_Connect_IP;
    QWidget *widget_46;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_50;
    QLineEdit *lineEdit_Robot_Connect_Port;
    QToolButton *toolButton_Connect_Robot;
    QLabel *label_Connect_Robot;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_47;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_35;
    QLineEdit *lineEdit_Camera_Connect_IP;
    QToolButton *toolButton_Connect_Camera;
    QLabel *label_Connect_Camera;
    QGroupBox *groupBox_PositionControl;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_Position_X;
    QLabel *label_10;
    QPushButton *Minius_X;
    QPushButton *Plus_X;
    QPushButton *Zero_X;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_Position_Y;
    QLabel *label_11;
    QPushButton *Minius_Y;
    QPushButton *Plus_Y;
    QPushButton *Zero_Y;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_Position_Z;
    QLabel *label_13;
    QPushButton *Minius_Z;
    QPushButton *Plus_Z;
    QPushButton *Zero_Z;
    QVBoxLayout *verticalLayout_15;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_Position_A;
    QLabel *label_15;
    QPushButton *Minius_A;
    QPushButton *Plus_A;
    QPushButton *Zero_A;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_Position_B;
    QLabel *label_16;
    QPushButton *Minius_B;
    QPushButton *Plus_B;
    QPushButton *Zero_B;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_Position_C;
    QLabel *label_18;
    QPushButton *Minius_C;
    QPushButton *Plus_C;
    QPushButton *Zero_C;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_41;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_31;
    QPushButton *toolButton_MovePattern;
    QWidget *widget_42;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_32;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_42;
    QToolButton *Zero_All;
    QToolButton *toolButton_Submit;
    QToolButton *toolButton_SuddenStop;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_Force;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_32;
    QVBoxLayout *verticalLayout_32;
    QWidget *widget_37;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_PLC_Vacuum;
    QLabel *label_42;
    QPushButton *pushButton_PLC_Vacuum;
    QWidget *widget_38;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_PLC_DestroyVacuum;
    QLabel *label_45;
    QPushButton *pushButton_PLC_DestroyVacuum;
    QWidget *widget_33;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_PLC_SuckScrew;
    QLabel *label_34;
    QPushButton *pushButton_PLC_SuckScrew;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_34;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_PLC_Tighten;
    QLabel *label_6;
    QPushButton *pushButton_PLC_Tighten;
    QWidget *widget_36;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_PLC_MultiGripper;
    QLabel *label_3;
    QPushButton *pushButton_PLC_MultiGripper;
    QWidget *widget_35;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_PLC_SingleGripper;
    QLabel *label_2;
    QPushButton *pushButton_PLC_SingleGripper;
    QWidget *widget_29;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_44;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_PLC_QuickChange;
    QLabel *label_33;
    QPushButton *toolButton_PLC_QuickChange;
    QWidget *widget_43;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_PLC_Light;
    QLabel *label_9;
    QPushButton *toolButton_PLC_Light;
    QGroupBox *groupBox_29;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_PLC_IO;
    QLineEdit *lineEdit_PLC_Connect_IO;
    QPushButton *toolButton_PLC_IO;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_21;
    QLabel *picture;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *CameraShot;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *Zoom_in;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *Zoom_out;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_Camera_Shot;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolButton_Settings;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *toolButton;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_9;
    QTreeView *treeView;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *delete_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *caculate;
    QWidget *tab_point_setting;
    QHBoxLayout *horizontalLayout_70;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_18;
    QTreeView *treeView_Point;
    QHBoxLayout *horizontalLayout_69;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *point_Add;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *point_Change;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *point_Remove;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_14;
    QWidget *tab_main;
    QWidget *widget_Tab2;
    QVBoxLayout *verticalLayout_30;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_28;
    QLabel *CameraWidget;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_14;
    QChartView *widget_Chart_Coordinate;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_X;
    QCheckBox *checkBox_Y;
    QCheckBox *checkBox_Z;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_20;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLCDNumber *lcdNumber_X;
    QLabel *label_23;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLCDNumber *lcdNumber_Y;
    QLabel *label_24;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLCDNumber *lcdNumber_Z;
    QLabel *label_25;
    QChartView *widget_Chart_Angle;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_Mx;
    QCheckBox *checkBox_My;
    QCheckBox *checkBox_Mz;
    QWidget *widget_25;
    QHBoxLayout *horizontalLayout_22;
    QWidget *widget_26;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_20;
    QLCDNumber *lcdNumber_A;
    QLabel *label_26;
    QWidget *widget_27;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_21;
    QLCDNumber *lcdNumber_B;
    QLabel *label_27;
    QWidget *widget_28;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_22;
    QLCDNumber *lcdNumber_C;
    QLabel *label_28;
    QGroupBox *groupBox_Force_2;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButton_Sensor_Demarcate;
    QToolButton *toolButton_Sensor_Calculate;
    QToolButton *toolButton_Sensor_Compensate;
    QGroupBox *groupBox_Force_4;
    QVBoxLayout *verticalLayout_19;
    QToolButton *toolButton_Sensor_Monitor;
    QToolButton *toolButton_Camera_Start;
    QGroupBox *groupBox_Force_3;
    QHBoxLayout *horizontalLayout_26;
    QToolButton *toolButton_Sensor_Calculate_2;
    QGroupBox *groupBox_PositionControl_2;
    QHBoxLayout *horizontalLayout_48;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_51;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_49;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_53;
    QDoubleSpinBox *doubleSpinBox_Position_X_3;
    QLabel *label_54;
    QPushButton *Minius_X_2;
    QPushButton *Plus_X_2;
    QPushButton *Zero_X_2;
    QWidget *widget_50;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_55;
    QDoubleSpinBox *doubleSpinBox_Position_Y_3;
    QLabel *label_58;
    QPushButton *Minius_Y_2;
    QPushButton *Plus_Y_2;
    QPushButton *Zero_Y_2;
    QWidget *widget_51;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_59;
    QDoubleSpinBox *doubleSpinBox_Position_Z_3;
    QLabel *label_60;
    QPushButton *Minius_Z_2;
    QPushButton *Plus_Z_2;
    QPushButton *Zero_Z_2;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_52;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_61;
    QDoubleSpinBox *doubleSpinBox_Position_A_3;
    QLabel *label_62;
    QPushButton *Minius_A_2;
    QPushButton *Plus_A_2;
    QPushButton *Zero_A_2;
    QWidget *widget_53;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_63;
    QDoubleSpinBox *doubleSpinBox_Position_B_3;
    QLabel *label_64;
    QPushButton *Minius_B_2;
    QPushButton *Plus_B_2;
    QPushButton *Zero_B_2;
    QWidget *widget_54;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_65;
    QDoubleSpinBox *doubleSpinBox_Position_C_3;
    QLabel *label_66;
    QPushButton *Minius_C_2;
    QPushButton *Plus_C_2;
    QPushButton *Zero_C_2;
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_55;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_67;
    QPushButton *toolButton_MovePattern_2;
    QWidget *widget_56;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_68;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_68;
    QToolButton *Zero_All_2;
    QToolButton *toolButton_Submit_2;
    QToolButton *toolButton_SuddenStop_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_34;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_56;
    QLabel *label_29;
    QDoubleSpinBox *doubleSpinBox_Position_X_2;
    QLabel *label_30;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_36;
    QDoubleSpinBox *doubleSpinBox_Position_Y_2;
    QLabel *label_37;
    QWidget *widget_30;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_38;
    QDoubleSpinBox *doubleSpinBox_Position_Z_2;
    QLabel *label_41;
    QWidget *widget_31;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_43;
    QDoubleSpinBox *doubleSpinBox_Position_A_2;
    QLabel *label_44;
    QWidget *widget_39;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_46;
    QDoubleSpinBox *doubleSpinBox_Position_B_2;
    QLabel *label_47;
    QWidget *widget_40;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_49;
    QDoubleSpinBox *doubleSpinBox_Position_C_2;
    QLabel *label_57;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1824, 976);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        MainWindow->setFont(font);
        actionCameraOrentation = new QAction(MainWindow);
        actionCameraOrentation->setObjectName(QString::fromUtf8("actionCameraOrentation"));
        actionAround_ForceGet = new QAction(MainWindow);
        actionAround_ForceGet->setObjectName(QString::fromUtf8("actionAround_ForceGet"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimSun"));
        font1.setPointSize(10);
        centralwidget->setFont(font1);
        centralwidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: #002140;\n"
"QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        tabWidget->setFont(font2);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"	border:2px solid #C3C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"	left:20px;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\345\244\226\345\275\242\350\256\276\347\275\256 */\n"
"QTabBar::tab {\n"
"	background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"	border:2px solid #C4C4C3;\n"
"	border-bottom-color:#C2C7CB;\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	min-width:50px;\n"
"	padding:10px;\n"
"	color:white;\n"
"	\n"
"	background-color: rgb(49, 70, 89);\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\350\242\253\351\200\211\344\270\255\346\227\266\346\210\226\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266 */\n"
"QTabBar::tab:selected,QTabBar::tab:hover {\n"
"	background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                 "
                        "               stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\350\242\253\351\200\211\344\270\255\346\227\266 */\n"
"QTabBar::tab:selected {\n"
"	border-color:#9B9B9B;\n"
"	border-bottom-color:#C2C7CB;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\346\234\252\350\242\253\351\200\211\344\270\255\346\227\266 */\n"
"QTabBar::tab:!selected {\n"
"	margin-top:2px;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\350\242\253\351\200\211\344\270\255\346\227\266,\345\244\226\346\241\206\345\220\221\345\244\226\346\211\251\345\244\247 */\n"
"QTabBar::tab:selected {\n"
"	margin-left:-4px;\n"
"	margin-right:-4px;\n"
"	color:black;\n"
"}\n"
""));
        tabWidget->setTabBarAutoHide(false);
        tab_test = new QWidget();
        tab_test->setObjectName(QString::fromUtf8("tab_test"));
        tab_test->setAutoFillBackground(false);
        tab_test->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(tab_test);
        verticalLayout_5->setSpacing(12);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(12, 12, 12, 12);
        tabWidget_2 = new QTabWidget(tab_test);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        tabWidget_2->setFont(font3);
        tabWidget_Settings = new QWidget();
        tabWidget_Settings->setObjectName(QString::fromUtf8("tabWidget_Settings"));
        verticalLayout_20 = new QVBoxLayout(tabWidget_Settings);
        verticalLayout_20->setSpacing(24);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(24);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(12, 12, 12, 0);
        groupBox_Connection = new QGroupBox(tabWidget_Settings);
        groupBox_Connection->setObjectName(QString::fromUtf8("groupBox_Connection"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox_Connection->setFont(font4);
        groupBox_Connection->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout_7 = new QVBoxLayout(groupBox_Connection);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 36, -1, -1);
        groupBox_2 = new QGroupBox(groupBox_Connection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font5;
        font5.setPointSize(12);
        groupBox_2->setFont(font5);
        horizontalLayout_50 = new QHBoxLayout(groupBox_2);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        horizontalLayout_50->setContentsMargins(-1, 16, -1, -1);
        widget_18 = new QWidget(groupBox_2);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_52 = new QHBoxLayout(widget_18);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        horizontalLayout_52->setContentsMargins(3, 3, 3, 3);
        label_39 = new QLabel(widget_18);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        label_39->setFont(font6);
        label_39->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_52->addWidget(label_39);

        lineEdit_PLC_Connect_IP = new QLineEdit(widget_18);
        lineEdit_PLC_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_PLC_Connect_IP"));
        lineEdit_PLC_Connect_IP->setEnabled(true);
        lineEdit_PLC_Connect_IP->setFont(font6);
        lineEdit_PLC_Connect_IP->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;\n"
"\n"
""));

        horizontalLayout_52->addWidget(lineEdit_PLC_Connect_IP);


        horizontalLayout_50->addWidget(widget_18);

        widget_21 = new QWidget(groupBox_2);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_53 = new QHBoxLayout(widget_21);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        horizontalLayout_53->setContentsMargins(3, 3, 3, 3);
        label_40 = new QLabel(widget_21);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font6);
        label_40->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_53->addWidget(label_40);

        lineEdit_PLC_Connect_Port = new QLineEdit(widget_21);
        lineEdit_PLC_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_PLC_Connect_Port"));
        lineEdit_PLC_Connect_Port->setFont(font6);
        lineEdit_PLC_Connect_Port->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_53->addWidget(lineEdit_PLC_Connect_Port);


        horizontalLayout_50->addWidget(widget_21);

        toolButton_Connect_PLC = new QToolButton(groupBox_2);
        toolButton_Connect_PLC->setObjectName(QString::fromUtf8("toolButton_Connect_PLC"));
        toolButton_Connect_PLC->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_Connect_PLC->sizePolicy().hasHeightForWidth());
        toolButton_Connect_PLC->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        toolButton_Connect_PLC->setFont(font7);
        toolButton_Connect_PLC->setMouseTracking(false);
        toolButton_Connect_PLC->setTabletTracking(false);
        toolButton_Connect_PLC->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Connect_PLC->setIconSize(QSize(0, 0));
        toolButton_Connect_PLC->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_50->addWidget(toolButton_Connect_PLC, 0, Qt::AlignVCenter);

        label_Connect_PLC = new QLabel(groupBox_2);
        label_Connect_PLC->setObjectName(QString::fromUtf8("label_Connect_PLC"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        label_Connect_PLC->setFont(font8);
        label_Connect_PLC->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:red"));

        horizontalLayout_50->addWidget(label_Connect_PLC);

        horizontalLayout_50->setStretch(0, 3);
        horizontalLayout_50->setStretch(1, 2);
        horizontalLayout_50->setStretch(2, 1);

        verticalLayout_7->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(groupBox_Connection);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font5);
        horizontalLayout_57 = new QHBoxLayout(groupBox_6);
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        horizontalLayout_57->setContentsMargins(-1, 16, -1, -1);
        widget_47 = new QWidget(groupBox_6);
        widget_47->setObjectName(QString::fromUtf8("widget_47"));
        widget_47->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_58 = new QHBoxLayout(widget_47);
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        horizontalLayout_58->setContentsMargins(3, 3, 3, 3);
        label_51 = new QLabel(widget_47);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setFont(font6);
        label_51->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_58->addWidget(label_51);

        lineEdit_Sensor_Connect_IP = new QLineEdit(widget_47);
        lineEdit_Sensor_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Sensor_Connect_IP"));
        lineEdit_Sensor_Connect_IP->setFont(font6);
        lineEdit_Sensor_Connect_IP->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_58->addWidget(lineEdit_Sensor_Connect_IP);


        horizontalLayout_57->addWidget(widget_47);

        widget_48 = new QWidget(groupBox_6);
        widget_48->setObjectName(QString::fromUtf8("widget_48"));
        widget_48->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_59 = new QHBoxLayout(widget_48);
        horizontalLayout_59->setObjectName(QString::fromUtf8("horizontalLayout_59"));
        horizontalLayout_59->setContentsMargins(3, 3, 3, 3);
        label_52 = new QLabel(widget_48);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setFont(font6);
        label_52->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_59->addWidget(label_52);

        lineEdit_Sensor_Connect_Port = new QLineEdit(widget_48);
        lineEdit_Sensor_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_Sensor_Connect_Port"));
        lineEdit_Sensor_Connect_Port->setFont(font6);
        lineEdit_Sensor_Connect_Port->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_59->addWidget(lineEdit_Sensor_Connect_Port);


        horizontalLayout_57->addWidget(widget_48);

        toolButton_Connect_Sensor = new QToolButton(groupBox_6);
        toolButton_Connect_Sensor->setObjectName(QString::fromUtf8("toolButton_Connect_Sensor"));
        toolButton_Connect_Sensor->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_Connect_Sensor->sizePolicy().hasHeightForWidth());
        toolButton_Connect_Sensor->setSizePolicy(sizePolicy);
        toolButton_Connect_Sensor->setFont(font7);
        toolButton_Connect_Sensor->setMouseTracking(false);
        toolButton_Connect_Sensor->setTabletTracking(false);
        toolButton_Connect_Sensor->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Connect_Sensor->setIconSize(QSize(0, 0));
        toolButton_Connect_Sensor->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_57->addWidget(toolButton_Connect_Sensor, 0, Qt::AlignVCenter);

        label_Connect_Sensor = new QLabel(groupBox_6);
        label_Connect_Sensor->setObjectName(QString::fromUtf8("label_Connect_Sensor"));
        label_Connect_Sensor->setFont(font8);
        label_Connect_Sensor->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:red"));

        horizontalLayout_57->addWidget(label_Connect_Sensor);

        horizontalLayout_57->setStretch(0, 3);
        horizontalLayout_57->setStretch(1, 2);
        horizontalLayout_57->setStretch(2, 1);

        verticalLayout_7->addWidget(groupBox_6);

        groupBox_4 = new QGroupBox(groupBox_Connection);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font5);
        horizontalLayout_54 = new QHBoxLayout(groupBox_4);
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        horizontalLayout_54->setContentsMargins(-1, 16, -1, -1);
        widget_45 = new QWidget(groupBox_4);
        widget_45->setObjectName(QString::fromUtf8("widget_45"));
        widget_45->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_55 = new QHBoxLayout(widget_45);
        horizontalLayout_55->setObjectName(QString::fromUtf8("horizontalLayout_55"));
        horizontalLayout_55->setContentsMargins(3, 3, 3, 3);
        label_48 = new QLabel(widget_45);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setFont(font6);
        label_48->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_55->addWidget(label_48);

        lineEdit_Robot_Connect_IP = new QLineEdit(widget_45);
        lineEdit_Robot_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Robot_Connect_IP"));
        lineEdit_Robot_Connect_IP->setFont(font6);
        lineEdit_Robot_Connect_IP->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_55->addWidget(lineEdit_Robot_Connect_IP);


        horizontalLayout_54->addWidget(widget_45);

        widget_46 = new QWidget(groupBox_4);
        widget_46->setObjectName(QString::fromUtf8("widget_46"));
        widget_46->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_56 = new QHBoxLayout(widget_46);
        horizontalLayout_56->setObjectName(QString::fromUtf8("horizontalLayout_56"));
        horizontalLayout_56->setContentsMargins(3, 3, 3, 3);
        label_50 = new QLabel(widget_46);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFont(font6);
        label_50->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_56->addWidget(label_50);

        lineEdit_Robot_Connect_Port = new QLineEdit(widget_46);
        lineEdit_Robot_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_Robot_Connect_Port"));
        lineEdit_Robot_Connect_Port->setFont(font6);
        lineEdit_Robot_Connect_Port->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_56->addWidget(lineEdit_Robot_Connect_Port);


        horizontalLayout_54->addWidget(widget_46);

        toolButton_Connect_Robot = new QToolButton(groupBox_4);
        toolButton_Connect_Robot->setObjectName(QString::fromUtf8("toolButton_Connect_Robot"));
        toolButton_Connect_Robot->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_Connect_Robot->sizePolicy().hasHeightForWidth());
        toolButton_Connect_Robot->setSizePolicy(sizePolicy);
        toolButton_Connect_Robot->setFont(font7);
        toolButton_Connect_Robot->setMouseTracking(false);
        toolButton_Connect_Robot->setTabletTracking(false);
        toolButton_Connect_Robot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Connect_Robot->setIconSize(QSize(0, 0));
        toolButton_Connect_Robot->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_54->addWidget(toolButton_Connect_Robot, 0, Qt::AlignVCenter);

        label_Connect_Robot = new QLabel(groupBox_4);
        label_Connect_Robot->setObjectName(QString::fromUtf8("label_Connect_Robot"));
        label_Connect_Robot->setFont(font8);
        label_Connect_Robot->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:red"));

        horizontalLayout_54->addWidget(label_Connect_Robot);

        horizontalLayout_54->setStretch(0, 3);
        horizontalLayout_54->setStretch(1, 2);
        horizontalLayout_54->setStretch(2, 1);

        verticalLayout_7->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(groupBox_Connection);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font5);
        horizontalLayout_47 = new QHBoxLayout(groupBox_3);
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        horizontalLayout_47->setContentsMargins(-1, 16, -1, -1);
        widget_15 = new QWidget(groupBox_3);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));
        horizontalLayout_49 = new QHBoxLayout(widget_15);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        horizontalLayout_49->setContentsMargins(3, 3, 3, 3);
        label_35 = new QLabel(widget_15);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setFont(font6);
        label_35->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_49->addWidget(label_35);

        lineEdit_Camera_Connect_IP = new QLineEdit(widget_15);
        lineEdit_Camera_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Camera_Connect_IP"));
        lineEdit_Camera_Connect_IP->setFont(font6);
        lineEdit_Camera_Connect_IP->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_49->addWidget(lineEdit_Camera_Connect_IP);


        horizontalLayout_47->addWidget(widget_15);

        toolButton_Connect_Camera = new QToolButton(groupBox_3);
        toolButton_Connect_Camera->setObjectName(QString::fromUtf8("toolButton_Connect_Camera"));
        toolButton_Connect_Camera->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_Connect_Camera->sizePolicy().hasHeightForWidth());
        toolButton_Connect_Camera->setSizePolicy(sizePolicy);
        toolButton_Connect_Camera->setFont(font7);
        toolButton_Connect_Camera->setMouseTracking(false);
        toolButton_Connect_Camera->setTabletTracking(false);
        toolButton_Connect_Camera->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Connect_Camera->setIconSize(QSize(0, 0));
        toolButton_Connect_Camera->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_47->addWidget(toolButton_Connect_Camera, 0, Qt::AlignVCenter);

        label_Connect_Camera = new QLabel(groupBox_3);
        label_Connect_Camera->setObjectName(QString::fromUtf8("label_Connect_Camera"));
        label_Connect_Camera->setFont(font8);
        label_Connect_Camera->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:red"));

        horizontalLayout_47->addWidget(label_Connect_Camera);

        horizontalLayout_47->setStretch(0, 5);
        horizontalLayout_47->setStretch(1, 1);

        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_7->addWidget(groupBox_Connection);

        groupBox_PositionControl = new QGroupBox(tabWidget_Settings);
        groupBox_PositionControl->setObjectName(QString::fromUtf8("groupBox_PositionControl"));
        groupBox_PositionControl->setFont(font4);
        groupBox_PositionControl->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_PositionControl);
        horizontalLayout_8->setSpacing(24);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(24, 36, 24, 24);
        groupBox = new QGroupBox(groupBox_PositionControl);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"font: \"Times New Roman\" 24px;"));
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox->setFlat(false);
        horizontalLayout_19 = new QHBoxLayout(groupBox);
        horizontalLayout_19->setSpacing(12);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(24, 24, 24, 24);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(12, -1, 12, -1);
        widget_16 = new QWidget(groupBox);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setStyleSheet(QString::fromUtf8("font: \"Times New Roman\" 24px;\n"
""));
        horizontalLayout_13 = new QHBoxLayout(widget_16);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(6, 6, 6, 6);
        label_4 = new QLabel(widget_16);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_13->addWidget(label_4);

        doubleSpinBox_Position_X = new QDoubleSpinBox(widget_16);
        doubleSpinBox_Position_X->setObjectName(QString::fromUtf8("doubleSpinBox_Position_X"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("24px"));
        font9.setBold(false);
        font9.setItalic(false);
        font9.setWeight(50);
        doubleSpinBox_Position_X->setFont(font9);
        doubleSpinBox_Position_X->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_X->setAcceptDrops(false);
        doubleSpinBox_Position_X->setAutoFillBackground(false);
        doubleSpinBox_Position_X->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_X->setFrame(true);
        doubleSpinBox_Position_X->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_X->setDecimals(3);
        doubleSpinBox_Position_X->setMaximum(999.990000000000009);
        doubleSpinBox_Position_X->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_X->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_13->addWidget(doubleSpinBox_Position_X);

        label_10 = new QLabel(widget_16);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_13->addWidget(label_10);

        Minius_X = new QPushButton(widget_16);
        Minius_X->setObjectName(QString::fromUtf8("Minius_X"));
        Minius_X->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/minius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Minius_X->setIcon(icon);
        Minius_X->setIconSize(QSize(40, 40));
        Minius_X->setFlat(true);

        horizontalLayout_13->addWidget(Minius_X);

        Plus_X = new QPushButton(widget_16);
        Plus_X->setObjectName(QString::fromUtf8("Plus_X"));
        Plus_X->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Plus_X->setIcon(icon1);
        Plus_X->setIconSize(QSize(40, 40));
        Plus_X->setFlat(true);

        horizontalLayout_13->addWidget(Plus_X);

        Zero_X = new QPushButton(widget_16);
        Zero_X->setObjectName(QString::fromUtf8("Zero_X"));
        Zero_X->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/zero.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Zero_X->setIcon(icon2);
        Zero_X->setIconSize(QSize(40, 40));
        Zero_X->setFlat(true);

        horizontalLayout_13->addWidget(Zero_X);


        verticalLayout_10->addWidget(widget_16);

        widget_19 = new QWidget(groupBox);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        horizontalLayout_15 = new QHBoxLayout(widget_19);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(6, 6, 6, 6);
        label_5 = new QLabel(widget_19);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_15->addWidget(label_5);

        doubleSpinBox_Position_Y = new QDoubleSpinBox(widget_19);
        doubleSpinBox_Position_Y->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Y"));
        doubleSpinBox_Position_Y->setFont(font9);
        doubleSpinBox_Position_Y->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Y->setAcceptDrops(false);
        doubleSpinBox_Position_Y->setAutoFillBackground(false);
        doubleSpinBox_Position_Y->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_Y->setFrame(true);
        doubleSpinBox_Position_Y->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Y->setDecimals(3);
        doubleSpinBox_Position_Y->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Y->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_Y->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_15->addWidget(doubleSpinBox_Position_Y);

        label_11 = new QLabel(widget_19);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_15->addWidget(label_11);

        Minius_Y = new QPushButton(widget_19);
        Minius_Y->setObjectName(QString::fromUtf8("Minius_Y"));
        Minius_Y->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_Y->setIcon(icon);
        Minius_Y->setIconSize(QSize(40, 40));
        Minius_Y->setFlat(true);

        horizontalLayout_15->addWidget(Minius_Y);

        Plus_Y = new QPushButton(widget_19);
        Plus_Y->setObjectName(QString::fromUtf8("Plus_Y"));
        Plus_Y->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_Y->setIcon(icon1);
        Plus_Y->setIconSize(QSize(40, 40));
        Plus_Y->setFlat(true);

        horizontalLayout_15->addWidget(Plus_Y);

        Zero_Y = new QPushButton(widget_19);
        Zero_Y->setObjectName(QString::fromUtf8("Zero_Y"));
        Zero_Y->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_Y->setIcon(icon2);
        Zero_Y->setIconSize(QSize(40, 40));
        Zero_Y->setFlat(true);

        horizontalLayout_15->addWidget(Zero_Y);


        verticalLayout_10->addWidget(widget_19);

        widget_22 = new QWidget(groupBox);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        horizontalLayout_17 = new QHBoxLayout(widget_22);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(6, 6, 6, 6);
        label_12 = new QLabel(widget_22);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_17->addWidget(label_12);

        doubleSpinBox_Position_Z = new QDoubleSpinBox(widget_22);
        doubleSpinBox_Position_Z->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Z"));
        doubleSpinBox_Position_Z->setFont(font9);
        doubleSpinBox_Position_Z->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Z->setAcceptDrops(false);
        doubleSpinBox_Position_Z->setAutoFillBackground(false);
        doubleSpinBox_Position_Z->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_Z->setFrame(true);
        doubleSpinBox_Position_Z->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Z->setDecimals(3);
        doubleSpinBox_Position_Z->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Z->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_Z->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_17->addWidget(doubleSpinBox_Position_Z);

        label_13 = new QLabel(widget_22);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_17->addWidget(label_13);

        Minius_Z = new QPushButton(widget_22);
        Minius_Z->setObjectName(QString::fromUtf8("Minius_Z"));
        Minius_Z->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_Z->setIcon(icon);
        Minius_Z->setIconSize(QSize(40, 40));
        Minius_Z->setFlat(true);

        horizontalLayout_17->addWidget(Minius_Z);

        Plus_Z = new QPushButton(widget_22);
        Plus_Z->setObjectName(QString::fromUtf8("Plus_Z"));
        Plus_Z->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_Z->setIcon(icon1);
        Plus_Z->setIconSize(QSize(40, 40));
        Plus_Z->setFlat(true);

        horizontalLayout_17->addWidget(Plus_Z);

        Zero_Z = new QPushButton(widget_22);
        Zero_Z->setObjectName(QString::fromUtf8("Zero_Z"));
        Zero_Z->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_Z->setIcon(icon2);
        Zero_Z->setIconSize(QSize(40, 40));
        Zero_Z->setFlat(true);

        horizontalLayout_17->addWidget(Zero_Z);


        verticalLayout_10->addWidget(widget_22);


        horizontalLayout_19->addLayout(verticalLayout_10);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(12, -1, 12, -1);
        widget_17 = new QWidget(groupBox);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        horizontalLayout_14 = new QHBoxLayout(widget_17);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(6, 6, 6, 6);
        label_7 = new QLabel(widget_17);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_14->addWidget(label_7);

        doubleSpinBox_Position_A = new QDoubleSpinBox(widget_17);
        doubleSpinBox_Position_A->setObjectName(QString::fromUtf8("doubleSpinBox_Position_A"));
        doubleSpinBox_Position_A->setFont(font9);
        doubleSpinBox_Position_A->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_A->setAcceptDrops(false);
        doubleSpinBox_Position_A->setAutoFillBackground(false);
        doubleSpinBox_Position_A->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_A->setFrame(true);
        doubleSpinBox_Position_A->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_A->setDecimals(3);
        doubleSpinBox_Position_A->setMaximum(360.000000000000000);
        doubleSpinBox_Position_A->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_A->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_14->addWidget(doubleSpinBox_Position_A);

        label_15 = new QLabel(widget_17);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_14->addWidget(label_15);

        Minius_A = new QPushButton(widget_17);
        Minius_A->setObjectName(QString::fromUtf8("Minius_A"));
        Minius_A->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_A->setIcon(icon);
        Minius_A->setIconSize(QSize(40, 40));
        Minius_A->setFlat(true);

        horizontalLayout_14->addWidget(Minius_A);

        Plus_A = new QPushButton(widget_17);
        Plus_A->setObjectName(QString::fromUtf8("Plus_A"));
        Plus_A->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_A->setIcon(icon1);
        Plus_A->setIconSize(QSize(40, 40));
        Plus_A->setFlat(true);

        horizontalLayout_14->addWidget(Plus_A);

        Zero_A = new QPushButton(widget_17);
        Zero_A->setObjectName(QString::fromUtf8("Zero_A"));
        Zero_A->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_A->setIcon(icon2);
        Zero_A->setIconSize(QSize(40, 40));
        Zero_A->setFlat(true);

        horizontalLayout_14->addWidget(Zero_A);


        verticalLayout_15->addWidget(widget_17);

        widget_20 = new QWidget(groupBox);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        horizontalLayout_16 = new QHBoxLayout(widget_20);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(6, 6, 6, 6);
        label_8 = new QLabel(widget_20);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_16->addWidget(label_8);

        doubleSpinBox_Position_B = new QDoubleSpinBox(widget_20);
        doubleSpinBox_Position_B->setObjectName(QString::fromUtf8("doubleSpinBox_Position_B"));
        doubleSpinBox_Position_B->setFont(font9);
        doubleSpinBox_Position_B->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_B->setAcceptDrops(false);
        doubleSpinBox_Position_B->setAutoFillBackground(false);
        doubleSpinBox_Position_B->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_B->setFrame(true);
        doubleSpinBox_Position_B->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_B->setDecimals(3);
        doubleSpinBox_Position_B->setMaximum(360.000000000000000);
        doubleSpinBox_Position_B->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_16->addWidget(doubleSpinBox_Position_B);

        label_16 = new QLabel(widget_20);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_16->addWidget(label_16);

        Minius_B = new QPushButton(widget_20);
        Minius_B->setObjectName(QString::fromUtf8("Minius_B"));
        Minius_B->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_B->setIcon(icon);
        Minius_B->setIconSize(QSize(40, 40));
        Minius_B->setFlat(true);

        horizontalLayout_16->addWidget(Minius_B);

        Plus_B = new QPushButton(widget_20);
        Plus_B->setObjectName(QString::fromUtf8("Plus_B"));
        Plus_B->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_B->setIcon(icon1);
        Plus_B->setIconSize(QSize(40, 40));
        Plus_B->setFlat(true);

        horizontalLayout_16->addWidget(Plus_B);

        Zero_B = new QPushButton(widget_20);
        Zero_B->setObjectName(QString::fromUtf8("Zero_B"));
        Zero_B->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_B->setIcon(icon2);
        Zero_B->setIconSize(QSize(40, 40));
        Zero_B->setFlat(true);

        horizontalLayout_16->addWidget(Zero_B);


        verticalLayout_15->addWidget(widget_20);

        widget_23 = new QWidget(groupBox);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        horizontalLayout_18 = new QHBoxLayout(widget_23);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(6, 6, 6, 6);
        label_17 = new QLabel(widget_23);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_18->addWidget(label_17);

        doubleSpinBox_Position_C = new QDoubleSpinBox(widget_23);
        doubleSpinBox_Position_C->setObjectName(QString::fromUtf8("doubleSpinBox_Position_C"));
        doubleSpinBox_Position_C->setFont(font9);
        doubleSpinBox_Position_C->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_C->setAcceptDrops(false);
        doubleSpinBox_Position_C->setAutoFillBackground(false);
        doubleSpinBox_Position_C->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_C->setFrame(true);
        doubleSpinBox_Position_C->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_C->setDecimals(3);
        doubleSpinBox_Position_C->setMaximum(360.000000000000000);
        doubleSpinBox_Position_C->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_C->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_18->addWidget(doubleSpinBox_Position_C);

        label_18 = new QLabel(widget_23);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_18->addWidget(label_18);

        Minius_C = new QPushButton(widget_23);
        Minius_C->setObjectName(QString::fromUtf8("Minius_C"));
        Minius_C->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_C->setIcon(icon);
        Minius_C->setIconSize(QSize(40, 40));
        Minius_C->setFlat(true);

        horizontalLayout_18->addWidget(Minius_C);

        Plus_C = new QPushButton(widget_23);
        Plus_C->setObjectName(QString::fromUtf8("Plus_C"));
        Plus_C->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_C->setIcon(icon1);
        Plus_C->setIconSize(QSize(40, 40));
        Plus_C->setFlat(true);

        horizontalLayout_18->addWidget(Plus_C);

        Zero_C = new QPushButton(widget_23);
        Zero_C->setObjectName(QString::fromUtf8("Zero_C"));
        Zero_C->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_C->setIcon(icon2);
        Zero_C->setIconSize(QSize(40, 40));
        Zero_C->setFlat(true);

        horizontalLayout_18->addWidget(Zero_C);


        verticalLayout_15->addWidget(widget_23);


        horizontalLayout_19->addLayout(verticalLayout_15);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(12, 12, -1, -1);
        widget_41 = new QWidget(groupBox);
        widget_41->setObjectName(QString::fromUtf8("widget_41"));
        widget_41->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_43 = new QHBoxLayout(widget_41);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        horizontalLayout_43->setContentsMargins(3, 3, 3, 3);
        label_31 = new QLabel(widget_41);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        QFont font10;
        font10.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font10.setPointSize(20);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setWeight(75);
        label_31->setFont(font10);
        label_31->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_43->addWidget(label_31);

        toolButton_MovePattern = new QPushButton(widget_41);
        toolButton_MovePattern->setObjectName(QString::fromUtf8("toolButton_MovePattern"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_MovePattern->sizePolicy().hasHeightForWidth());
        toolButton_MovePattern->setSizePolicy(sizePolicy2);
        toolButton_MovePattern->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/switchOff.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_MovePattern->setIcon(icon3);
        toolButton_MovePattern->setIconSize(QSize(80, 40));
        toolButton_MovePattern->setFlat(true);

        horizontalLayout_43->addWidget(toolButton_MovePattern);


        verticalLayout_12->addWidget(widget_41);

        widget_42 = new QWidget(groupBox);
        widget_42->setObjectName(QString::fromUtf8("widget_42"));
        widget_42->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_44 = new QHBoxLayout(widget_42);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        horizontalLayout_44->setContentsMargins(3, 3, 3, 3);
        label_32 = new QLabel(widget_42);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);
        label_32->setFont(font10);
        label_32->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_44->addWidget(label_32);

        comboBox = new QComboBox(widget_42);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font11;
        font11.setFamily(QString::fromUtf8("24px"));
        font11.setPointSize(24);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        comboBox->setFont(font11);
        comboBox->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color:white"));
        comboBox->setEditable(false);
        comboBox->setModelColumn(0);

        horizontalLayout_44->addWidget(comboBox);

        horizontalLayout_44->setStretch(0, 2);
        horizontalLayout_44->setStretch(1, 1);

        verticalLayout_12->addWidget(widget_42);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        Zero_All = new QToolButton(groupBox);
        Zero_All->setObjectName(QString::fromUtf8("Zero_All"));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font12.setPointSize(20);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        Zero_All->setFont(font12);
        Zero_All->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_All->setIcon(icon2);
        Zero_All->setIconSize(QSize(60, 60));
        Zero_All->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_42->addWidget(Zero_All);

        toolButton_Submit = new QToolButton(groupBox);
        toolButton_Submit->setObjectName(QString::fromUtf8("toolButton_Submit"));
        toolButton_Submit->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_Submit->sizePolicy().hasHeightForWidth());
        toolButton_Submit->setSizePolicy(sizePolicy);
        toolButton_Submit->setFont(font12);
        toolButton_Submit->setMouseTracking(false);
        toolButton_Submit->setTabletTracking(false);
        toolButton_Submit->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/position_SubmitW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Submit->setIcon(icon4);
        toolButton_Submit->setIconSize(QSize(60, 60));
        toolButton_Submit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_42->addWidget(toolButton_Submit);

        toolButton_SuddenStop = new QToolButton(groupBox);
        toolButton_SuddenStop->setObjectName(QString::fromUtf8("toolButton_SuddenStop"));
        sizePolicy.setHeightForWidth(toolButton_SuddenStop->sizePolicy().hasHeightForWidth());
        toolButton_SuddenStop->setSizePolicy(sizePolicy);
        toolButton_SuddenStop->setMinimumSize(QSize(120, 0));
        toolButton_SuddenStop->setFont(font12);
        toolButton_SuddenStop->setMouseTracking(false);
        toolButton_SuddenStop->setTabletTracking(false);
        toolButton_SuddenStop->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/Stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_SuddenStop->setIcon(icon5);
        toolButton_SuddenStop->setIconSize(QSize(60, 60));
        toolButton_SuddenStop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_42->addWidget(toolButton_SuddenStop);

        horizontalLayout_42->setStretch(0, 1);
        horizontalLayout_42->setStretch(1, 1);
        horizontalLayout_42->setStretch(2, 1);

        verticalLayout_12->addLayout(horizontalLayout_42);


        horizontalLayout_19->addLayout(verticalLayout_12);


        horizontalLayout_8->addWidget(groupBox);


        horizontalLayout_7->addWidget(groupBox_PositionControl);


        verticalLayout_20->addLayout(horizontalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(24);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_Force = new QGroupBox(tabWidget_Settings);
        groupBox_Force->setObjectName(QString::fromUtf8("groupBox_Force"));
        groupBox_Force->setFont(font4);
        groupBox_Force->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Force);
        horizontalLayout_3->setSpacing(40);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(24, 36, 24, 24);
        widget_32 = new QWidget(groupBox_Force);
        widget_32->setObjectName(QString::fromUtf8("widget_32"));
        widget_32->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        verticalLayout_32 = new QVBoxLayout(widget_32);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        widget_37 = new QWidget(widget_32);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_35 = new QHBoxLayout(widget_37);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(3, 3, 3, 3);
        label_PLC_Vacuum = new QLabel(widget_37);
        label_PLC_Vacuum->setObjectName(QString::fromUtf8("label_PLC_Vacuum"));
        label_PLC_Vacuum->setFont(font8);
        label_PLC_Vacuum->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_35->addWidget(label_PLC_Vacuum);

        label_42 = new QLabel(widget_37);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy1.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy1);
        label_42->setFont(font7);
        label_42->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_35->addWidget(label_42);

        pushButton_PLC_Vacuum = new QPushButton(widget_37);
        pushButton_PLC_Vacuum->setObjectName(QString::fromUtf8("pushButton_PLC_Vacuum"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_Vacuum->sizePolicy().hasHeightForWidth());
        pushButton_PLC_Vacuum->setSizePolicy(sizePolicy2);
        pushButton_PLC_Vacuum->setAutoFillBackground(false);
        pushButton_PLC_Vacuum->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:6px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_Vacuum->setIcon(icon3);
        pushButton_PLC_Vacuum->setIconSize(QSize(60, 30));
        pushButton_PLC_Vacuum->setFlat(true);

        horizontalLayout_35->addWidget(pushButton_PLC_Vacuum);

        horizontalLayout_35->setStretch(0, 1);
        horizontalLayout_35->setStretch(1, 1);
        horizontalLayout_35->setStretch(2, 1);

        verticalLayout_32->addWidget(widget_37);

        widget_38 = new QWidget(widget_32);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        widget_38->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_36 = new QHBoxLayout(widget_38);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(3, 3, 3, 3);
        label_PLC_DestroyVacuum = new QLabel(widget_38);
        label_PLC_DestroyVacuum->setObjectName(QString::fromUtf8("label_PLC_DestroyVacuum"));
        label_PLC_DestroyVacuum->setFont(font8);
        label_PLC_DestroyVacuum->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_36->addWidget(label_PLC_DestroyVacuum);

        label_45 = new QLabel(widget_38);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy1.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy1);
        label_45->setFont(font7);
        label_45->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_36->addWidget(label_45);

        pushButton_PLC_DestroyVacuum = new QPushButton(widget_38);
        pushButton_PLC_DestroyVacuum->setObjectName(QString::fromUtf8("pushButton_PLC_DestroyVacuum"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_DestroyVacuum->sizePolicy().hasHeightForWidth());
        pushButton_PLC_DestroyVacuum->setSizePolicy(sizePolicy2);
        pushButton_PLC_DestroyVacuum->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_DestroyVacuum->setIcon(icon3);
        pushButton_PLC_DestroyVacuum->setIconSize(QSize(60, 30));
        pushButton_PLC_DestroyVacuum->setFlat(true);

        horizontalLayout_36->addWidget(pushButton_PLC_DestroyVacuum);

        horizontalLayout_36->setStretch(0, 1);
        horizontalLayout_36->setStretch(1, 1);
        horizontalLayout_36->setStretch(2, 1);

        verticalLayout_32->addWidget(widget_38);

        widget_33 = new QWidget(widget_32);
        widget_33->setObjectName(QString::fromUtf8("widget_33"));
        widget_33->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_29 = new QHBoxLayout(widget_33);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(3, 3, 3, 3);
        label_PLC_SuckScrew = new QLabel(widget_33);
        label_PLC_SuckScrew->setObjectName(QString::fromUtf8("label_PLC_SuckScrew"));
        label_PLC_SuckScrew->setFont(font8);
        label_PLC_SuckScrew->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_29->addWidget(label_PLC_SuckScrew);

        label_34 = new QLabel(widget_33);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy1.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy1);
        label_34->setFont(font7);
        label_34->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_29->addWidget(label_34);

        pushButton_PLC_SuckScrew = new QPushButton(widget_33);
        pushButton_PLC_SuckScrew->setObjectName(QString::fromUtf8("pushButton_PLC_SuckScrew"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_SuckScrew->sizePolicy().hasHeightForWidth());
        pushButton_PLC_SuckScrew->setSizePolicy(sizePolicy2);
        pushButton_PLC_SuckScrew->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_SuckScrew->setIcon(icon3);
        pushButton_PLC_SuckScrew->setIconSize(QSize(60, 30));
        pushButton_PLC_SuckScrew->setFlat(true);

        horizontalLayout_29->addWidget(pushButton_PLC_SuckScrew);

        horizontalLayout_29->setStretch(0, 1);
        horizontalLayout_29->setStretch(1, 1);
        horizontalLayout_29->setStretch(2, 1);

        verticalLayout_32->addWidget(widget_33);


        horizontalLayout_3->addWidget(widget_32);

        widget_13 = new QWidget(groupBox_Force);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        verticalLayout_6 = new QVBoxLayout(widget_13);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_34 = new QWidget(widget_13);
        widget_34->setObjectName(QString::fromUtf8("widget_34"));
        widget_34->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_30 = new QHBoxLayout(widget_34);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(3, 3, 3, 3);
        label_PLC_Tighten = new QLabel(widget_34);
        label_PLC_Tighten->setObjectName(QString::fromUtf8("label_PLC_Tighten"));
        label_PLC_Tighten->setFont(font8);
        label_PLC_Tighten->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_30->addWidget(label_PLC_Tighten);

        label_6 = new QLabel(widget_34);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_30->addWidget(label_6);

        pushButton_PLC_Tighten = new QPushButton(widget_34);
        pushButton_PLC_Tighten->setObjectName(QString::fromUtf8("pushButton_PLC_Tighten"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_Tighten->sizePolicy().hasHeightForWidth());
        pushButton_PLC_Tighten->setSizePolicy(sizePolicy2);
        pushButton_PLC_Tighten->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_Tighten->setIcon(icon3);
        pushButton_PLC_Tighten->setIconSize(QSize(60, 30));
        pushButton_PLC_Tighten->setFlat(true);

        horizontalLayout_30->addWidget(pushButton_PLC_Tighten);


        verticalLayout_6->addWidget(widget_34);

        widget_36 = new QWidget(widget_13);
        widget_36->setObjectName(QString::fromUtf8("widget_36"));
        widget_36->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_32 = new QHBoxLayout(widget_36);
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(3, 3, 3, 3);
        label_PLC_MultiGripper = new QLabel(widget_36);
        label_PLC_MultiGripper->setObjectName(QString::fromUtf8("label_PLC_MultiGripper"));
        label_PLC_MultiGripper->setFont(font8);
        label_PLC_MultiGripper->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_32->addWidget(label_PLC_MultiGripper);

        label_3 = new QLabel(widget_36);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font7);
        label_3->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_32->addWidget(label_3);

        pushButton_PLC_MultiGripper = new QPushButton(widget_36);
        pushButton_PLC_MultiGripper->setObjectName(QString::fromUtf8("pushButton_PLC_MultiGripper"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_MultiGripper->sizePolicy().hasHeightForWidth());
        pushButton_PLC_MultiGripper->setSizePolicy(sizePolicy2);
        pushButton_PLC_MultiGripper->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_MultiGripper->setIcon(icon3);
        pushButton_PLC_MultiGripper->setIconSize(QSize(60, 30));
        pushButton_PLC_MultiGripper->setFlat(true);

        horizontalLayout_32->addWidget(pushButton_PLC_MultiGripper);


        verticalLayout_6->addWidget(widget_36);

        widget_35 = new QWidget(widget_13);
        widget_35->setObjectName(QString::fromUtf8("widget_35"));
        widget_35->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_31 = new QHBoxLayout(widget_35);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(3, 3, 3, 3);
        label_PLC_SingleGripper = new QLabel(widget_35);
        label_PLC_SingleGripper->setObjectName(QString::fromUtf8("label_PLC_SingleGripper"));
        label_PLC_SingleGripper->setFont(font8);
        label_PLC_SingleGripper->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_31->addWidget(label_PLC_SingleGripper);

        label_2 = new QLabel(widget_35);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font7);
        label_2->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_31->addWidget(label_2);

        pushButton_PLC_SingleGripper = new QPushButton(widget_35);
        pushButton_PLC_SingleGripper->setObjectName(QString::fromUtf8("pushButton_PLC_SingleGripper"));
        sizePolicy2.setHeightForWidth(pushButton_PLC_SingleGripper->sizePolicy().hasHeightForWidth());
        pushButton_PLC_SingleGripper->setSizePolicy(sizePolicy2);
        pushButton_PLC_SingleGripper->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        pushButton_PLC_SingleGripper->setIcon(icon3);
        pushButton_PLC_SingleGripper->setIconSize(QSize(60, 30));
        pushButton_PLC_SingleGripper->setFlat(true);

        horizontalLayout_31->addWidget(pushButton_PLC_SingleGripper);


        verticalLayout_6->addWidget(widget_35);


        horizontalLayout_3->addWidget(widget_13);

        widget_29 = new QWidget(groupBox_Force);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        widget_29->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        verticalLayout_11 = new QVBoxLayout(widget_29);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        widget_44 = new QWidget(widget_29);
        widget_44->setObjectName(QString::fromUtf8("widget_44"));
        widget_44->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_46 = new QHBoxLayout(widget_44);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(3, 3, 3, 3);
        label_PLC_QuickChange = new QLabel(widget_44);
        label_PLC_QuickChange->setObjectName(QString::fromUtf8("label_PLC_QuickChange"));
        label_PLC_QuickChange->setFont(font8);
        label_PLC_QuickChange->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_46->addWidget(label_PLC_QuickChange);

        label_33 = new QLabel(widget_44);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy1.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy1);
        label_33->setFont(font7);
        label_33->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_46->addWidget(label_33);

        toolButton_PLC_QuickChange = new QPushButton(widget_44);
        toolButton_PLC_QuickChange->setObjectName(QString::fromUtf8("toolButton_PLC_QuickChange"));
        sizePolicy2.setHeightForWidth(toolButton_PLC_QuickChange->sizePolicy().hasHeightForWidth());
        toolButton_PLC_QuickChange->setSizePolicy(sizePolicy2);
        toolButton_PLC_QuickChange->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        toolButton_PLC_QuickChange->setIcon(icon3);
        toolButton_PLC_QuickChange->setIconSize(QSize(60, 30));
        toolButton_PLC_QuickChange->setFlat(true);

        horizontalLayout_46->addWidget(toolButton_PLC_QuickChange);


        verticalLayout_11->addWidget(widget_44);

        widget_43 = new QWidget(widget_29);
        widget_43->setObjectName(QString::fromUtf8("widget_43"));
        widget_43->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_45 = new QHBoxLayout(widget_43);
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        horizontalLayout_45->setContentsMargins(3, 3, 3, 3);
        label_PLC_Light = new QLabel(widget_43);
        label_PLC_Light->setObjectName(QString::fromUtf8("label_PLC_Light"));
        label_PLC_Light->setFont(font8);
        label_PLC_Light->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_45->addWidget(label_PLC_Light);

        label_9 = new QLabel(widget_43);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font7);
        label_9->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"\n"
"border:none;\n"
""));

        horizontalLayout_45->addWidget(label_9);

        toolButton_PLC_Light = new QPushButton(widget_43);
        toolButton_PLC_Light->setObjectName(QString::fromUtf8("toolButton_PLC_Light"));
        sizePolicy2.setHeightForWidth(toolButton_PLC_Light->sizePolicy().hasHeightForWidth());
        toolButton_PLC_Light->setSizePolicy(sizePolicy2);
        toolButton_PLC_Light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        toolButton_PLC_Light->setIcon(icon3);
        toolButton_PLC_Light->setIconSize(QSize(60, 30));
        toolButton_PLC_Light->setFlat(true);

        horizontalLayout_45->addWidget(toolButton_PLC_Light);


        verticalLayout_11->addWidget(widget_43);

        groupBox_29 = new QGroupBox(widget_29);
        groupBox_29->setObjectName(QString::fromUtf8("groupBox_29"));
        groupBox_29->setFont(font8);
        groupBox_29->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_33 = new QHBoxLayout(groupBox_29);
        horizontalLayout_33->setSpacing(30);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(72, 12, 72, 3);
        label_PLC_IO = new QLabel(groupBox_29);
        label_PLC_IO->setObjectName(QString::fromUtf8("label_PLC_IO"));
        label_PLC_IO->setFont(font8);
        label_PLC_IO->setStyleSheet(QString::fromUtf8("min-width:30px;\n"
"min-height:30px;\n"
"max-width:30px;\n"
"max-height:30px;\n"
"border-radius:15px;\n"
"border:1px solid black;\n"
"background:grey\n"
""));

        horizontalLayout_33->addWidget(label_PLC_IO);

        lineEdit_PLC_Connect_IO = new QLineEdit(groupBox_29);
        lineEdit_PLC_Connect_IO->setObjectName(QString::fromUtf8("lineEdit_PLC_Connect_IO"));
        lineEdit_PLC_Connect_IO->setFont(font6);
        lineEdit_PLC_Connect_IO->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));

        horizontalLayout_33->addWidget(lineEdit_PLC_Connect_IO);

        toolButton_PLC_IO = new QPushButton(groupBox_29);
        toolButton_PLC_IO->setObjectName(QString::fromUtf8("toolButton_PLC_IO"));
        sizePolicy2.setHeightForWidth(toolButton_PLC_IO->sizePolicy().hasHeightForWidth());
        toolButton_PLC_IO->setSizePolicy(sizePolicy2);
        toolButton_PLC_IO->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        toolButton_PLC_IO->setIcon(icon3);
        toolButton_PLC_IO->setIconSize(QSize(60, 30));
        toolButton_PLC_IO->setFlat(true);

        horizontalLayout_33->addWidget(toolButton_PLC_IO);

        horizontalLayout_33->setStretch(0, 1);
        horizontalLayout_33->setStretch(1, 1);
        horizontalLayout_33->setStretch(2, 1);

        verticalLayout_11->addWidget(groupBox_29);


        horizontalLayout_3->addWidget(widget_29);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_8->addWidget(groupBox_Force);

        verticalLayout_8->setStretch(0, 1);

        verticalLayout_20->addLayout(verticalLayout_8);

        tabWidget_2->addTab(tabWidget_Settings, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_9 = new QHBoxLayout(tab_3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_21 = new QVBoxLayout(groupBox_9);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        picture = new QLabel(groupBox_9);
        picture->setObjectName(QString::fromUtf8("picture"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy3);
        picture->setMinimumSize(QSize(800, 600));
        picture->setStyleSheet(QString::fromUtf8("background-color:#434e59;\n"
"color:white;"));

        verticalLayout_21->addWidget(picture);

        widget_7 = new QWidget(groupBox_9);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy4);
        widget_7->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color: #434e59;"));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        CameraShot = new QToolButton(widget_7);
        CameraShot->setObjectName(QString::fromUtf8("CameraShot"));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font13.setPointSize(16);
        font13.setBold(true);
        font13.setWeight(75);
        CameraShot->setFont(font13);
        CameraShot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/video_Start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CameraShot->setIcon(icon6);
        CameraShot->setIconSize(QSize(60, 60));
        CameraShot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(CameraShot);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        Zoom_in = new QToolButton(widget_7);
        Zoom_in->setObjectName(QString::fromUtf8("Zoom_in"));
        Zoom_in->setFont(font13);
        Zoom_in->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        Zoom_in->setIcon(icon1);
        Zoom_in->setIconSize(QSize(60, 60));
        Zoom_in->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(Zoom_in);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        Zoom_out = new QToolButton(widget_7);
        Zoom_out->setObjectName(QString::fromUtf8("Zoom_out"));
        Zoom_out->setFont(font13);
        Zoom_out->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        Zoom_out->setIcon(icon);
        Zoom_out->setIconSize(QSize(60, 60));
        Zoom_out->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(Zoom_out);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        toolButton_Camera_Shot = new QToolButton(widget_7);
        toolButton_Camera_Shot->setObjectName(QString::fromUtf8("toolButton_Camera_Shot"));
        toolButton_Camera_Shot->setFont(font13);
        toolButton_Camera_Shot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/video_ShotW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Camera_Shot->setIcon(icon7);
        toolButton_Camera_Shot->setIconSize(QSize(60, 60));
        toolButton_Camera_Shot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(toolButton_Camera_Shot);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        toolButton_Settings = new QToolButton(widget_7);
        toolButton_Settings->setObjectName(QString::fromUtf8("toolButton_Settings"));
        toolButton_Settings->setFont(font13);
        toolButton_Settings->setLayoutDirection(Qt::LeftToRight);
        toolButton_Settings->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/video_BenchW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Settings->setIcon(icon8);
        toolButton_Settings->setIconSize(QSize(60, 60));
        toolButton_Settings->setAutoRepeatDelay(300);
        toolButton_Settings->setAutoRepeatInterval(100);
        toolButton_Settings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(toolButton_Settings);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        toolButton = new QToolButton(widget_7);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setFont(font13);
        toolButton->setLayoutDirection(Qt::LeftToRight);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/package.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon9);
        toolButton->setIconSize(QSize(60, 60));
        toolButton->setAutoRepeatDelay(300);
        toolButton->setAutoRepeatInterval(100);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(toolButton);


        verticalLayout_21->addWidget(widget_7);


        horizontalLayout_9->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setFont(font2);
        groupBox_10->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout_9 = new QVBoxLayout(groupBox_10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(12, 30, -1, -1);
        treeView = new QTreeView(groupBox_10);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setStyleSheet(QString::fromUtf8("QTreeView {\n"
"	background-color:#434e59;\n"
"    alternate-background-color: #637484;\n"
"	color:white;\n"
"  	font-family:Microsoft Yahei;\n"
"	font-size:20px;\n"
"}\n"
"\n"
"QTreeView {\n"
"    show-decoration-selected: 1;\n"
"}\n"
"\n"
"QTreeView::item {  /** item **/\n"
"        height: 25px;\n"
"        color: white;\n"
"        border: none;\n"
"        border-bottom: 1px solid rgb(50, 50, 50);\n"
"        background-color: transparent;\n"
"}\n"
"\n"
"QTreeView::item:hover {\n"
"    border: 1px solid blue;\n"
"    background : #DBDBDB;\n"
"}\n"
"\n"
"QTreeView::item:selected {\n"
"    border: 1px solid red;\n"
"    background : green;\n"
"}    "));

        verticalLayout_9->addWidget(treeView);

        widget_12 = new QWidget(groupBox_10);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        sizePolicy4.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy4);
        widget_12->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"color:white;"));
        horizontalLayout_27 = new QHBoxLayout(widget_12);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        delete_2 = new QPushButton(widget_12);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon10);
        delete_2->setIconSize(QSize(40, 40));
        delete_2->setFlat(true);

        horizontalLayout_27->addWidget(delete_2);

        horizontalSpacer_5 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_5);

        caculate = new QPushButton(widget_12);
        caculate->setObjectName(QString::fromUtf8("caculate"));
        caculate->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/caculate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        caculate->setIcon(icon11);
        caculate->setIconSize(QSize(40, 40));

        horizontalLayout_27->addWidget(caculate);


        verticalLayout_9->addWidget(widget_12);


        horizontalLayout_9->addWidget(groupBox_10);

        horizontalLayout_9->setStretch(0, 4);
        tabWidget_2->addTab(tab_3, QString());
        tab_point_setting = new QWidget();
        tab_point_setting->setObjectName(QString::fromUtf8("tab_point_setting"));
        horizontalLayout_70 = new QHBoxLayout(tab_point_setting);
        horizontalLayout_70->setObjectName(QString::fromUtf8("horizontalLayout_70"));
        horizontalLayout_70->setContentsMargins(-1, 36, -1, 36);
        horizontalSpacer_13 = new QSpacerItem(433, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_70->addItem(horizontalSpacer_13);

        widget_6 = new QWidget(tab_point_setting);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_18 = new QVBoxLayout(widget_6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        treeView_Point = new QTreeView(widget_6);
        treeView_Point->setObjectName(QString::fromUtf8("treeView_Point"));
        treeView_Point->setStyleSheet(QString::fromUtf8("QHeaderView\n"
"{\n"
"  	font-family:Microsoft Yahei;\n"
"	font-size:36px;\n"
"}\n"
"QTreeView {\n"
"	background-color:#434e59;\n"
"    alternate-background-color: #637484;\n"
"	color:white;\n"
"  	font-family:Microsoft Yahei;\n"
"	font-size:32px;\n"
"}\n"
"\n"
"QTreeView {\n"
"    show-decoration-selected: 1;\n"
"}\n"
"\n"
"QTreeView::item {  /** item **/\n"
"        height: 25px;\n"
"        color: white;\n"
"        border: none;\n"
"        border-bottom: 1px solid rgb(50, 50, 50);\n"
"        background-color: transparent;\n"
"}\n"
"\n"
"QTreeView::item:hover {\n"
"    border: 1px solid blue;\n"
"    background : #DBDBDB;\n"
"}\n"
"\n"
"QTreeView::item:selected {\n"
"    border: 1px solid red;\n"
"    background : green;\n"
"}    "));

        verticalLayout_18->addWidget(treeView_Point);

        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setObjectName(QString::fromUtf8("horizontalLayout_69"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_6);

        point_Add = new QToolButton(widget_6);
        point_Add->setObjectName(QString::fromUtf8("point_Add"));
        point_Add->setEnabled(true);
        sizePolicy.setHeightForWidth(point_Add->sizePolicy().hasHeightForWidth());
        point_Add->setSizePolicy(sizePolicy);
        point_Add->setFont(font7);
        point_Add->setMouseTracking(false);
        point_Add->setTabletTracking(false);
        point_Add->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        point_Add->setIconSize(QSize(0, 0));
        point_Add->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_69->addWidget(point_Add);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_11);

        point_Change = new QToolButton(widget_6);
        point_Change->setObjectName(QString::fromUtf8("point_Change"));
        point_Change->setEnabled(true);
        sizePolicy.setHeightForWidth(point_Change->sizePolicy().hasHeightForWidth());
        point_Change->setSizePolicy(sizePolicy);
        point_Change->setFont(font7);
        point_Change->setMouseTracking(false);
        point_Change->setTabletTracking(false);
        point_Change->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        point_Change->setIconSize(QSize(0, 0));
        point_Change->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_69->addWidget(point_Change);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_8);

        point_Remove = new QToolButton(widget_6);
        point_Remove->setObjectName(QString::fromUtf8("point_Remove"));
        point_Remove->setEnabled(true);
        sizePolicy.setHeightForWidth(point_Remove->sizePolicy().hasHeightForWidth());
        point_Remove->setSizePolicy(sizePolicy);
        point_Remove->setFont(font7);
        point_Remove->setMouseTracking(false);
        point_Remove->setTabletTracking(false);
        point_Remove->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        point_Remove->setIconSize(QSize(0, 0));
        point_Remove->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_69->addWidget(point_Remove);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_12);


        verticalLayout_18->addLayout(horizontalLayout_69);


        horizontalLayout_70->addWidget(widget_6);

        horizontalSpacer_14 = new QSpacerItem(433, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_70->addItem(horizontalSpacer_14);

        horizontalLayout_70->setStretch(0, 1);
        horizontalLayout_70->setStretch(1, 2);
        horizontalLayout_70->setStretch(2, 1);
        tabWidget_2->addTab(tab_point_setting, QString());

        verticalLayout_5->addWidget(tabWidget_2);

        tabWidget->addTab(tab_test, QString());
        tab_main = new QWidget();
        tab_main->setObjectName(QString::fromUtf8("tab_main"));
        widget_Tab2 = new QWidget(tab_main);
        widget_Tab2->setObjectName(QString::fromUtf8("widget_Tab2"));
        widget_Tab2->setGeometry(QRect(9, 9, 1215, 358));
        verticalLayout_30 = new QVBoxLayout(widget_Tab2);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        widget = new QWidget(widget_Tab2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(24);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, 0, 24, 0);
        groupBox_8 = new QGroupBox(widget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font14.setPointSize(16);
        font14.setBold(true);
        font14.setWeight(75);
        groupBox_8->setFont(font14);
        groupBox_8->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout_28 = new QVBoxLayout(groupBox_8);
        verticalLayout_28->setSpacing(24);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(24, 24, 24, 12);
        CameraWidget = new QLabel(groupBox_8);
        CameraWidget->setObjectName(QString::fromUtf8("CameraWidget"));
        sizePolicy3.setHeightForWidth(CameraWidget->sizePolicy().hasHeightForWidth());
        CameraWidget->setSizePolicy(sizePolicy3);
        CameraWidget->setMinimumSize(QSize(400, 300));
        CameraWidget->setStyleSheet(QString::fromUtf8("background-color:#434e59;"));
        CameraWidget->setAlignment(Qt::AlignCenter);

        verticalLayout_28->addWidget(CameraWidget);


        horizontalLayout->addWidget(groupBox_8);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(widget_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font15.setPointSize(16);
        font15.setBold(true);
        font15.setWeight(75);
        groupBox_5->setFont(font15);
        groupBox_5->setAcceptDrops(true);
        groupBox_5->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(24, 24, 12, 12);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(12, 0, 12, 12);
        widget_Chart_Coordinate = new QChartView(groupBox_5);
        widget_Chart_Coordinate->setObjectName(QString::fromUtf8("widget_Chart_Coordinate"));
        widget_Chart_Coordinate->setStyleSheet(QString::fromUtf8("background-color:#434e59;"));
        horizontalLayout_21 = new QHBoxLayout(widget_Chart_Coordinate);
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(508, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_2);

        widget_10 = new QWidget(widget_Chart_Coordinate);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        QFont font16;
        font16.setFamily(QString::fromUtf8("Times New Roman"));
        font16.setPointSize(12);
        font16.setBold(true);
        font16.setWeight(75);
        widget_10->setFont(font16);
        verticalLayout_3 = new QVBoxLayout(widget_10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_X = new QCheckBox(widget_10);
        checkBox_X->setObjectName(QString::fromUtf8("checkBox_X"));
        QFont font17;
        font17.setFamily(QString::fromUtf8("Times New Roman"));
        font17.setBold(true);
        font17.setItalic(true);
        font17.setWeight(75);
        checkBox_X->setFont(font17);
        checkBox_X->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_X->setChecked(true);

        verticalLayout_3->addWidget(checkBox_X);

        checkBox_Y = new QCheckBox(widget_10);
        checkBox_Y->setObjectName(QString::fromUtf8("checkBox_Y"));
        checkBox_Y->setFont(font17);
        checkBox_Y->setTabletTracking(false);
        checkBox_Y->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Y->setChecked(true);
        checkBox_Y->setTristate(false);

        verticalLayout_3->addWidget(checkBox_Y);

        checkBox_Z = new QCheckBox(widget_10);
        checkBox_Z->setObjectName(QString::fromUtf8("checkBox_Z"));
        checkBox_Z->setFont(font17);
        checkBox_Z->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Z->setChecked(true);

        verticalLayout_3->addWidget(checkBox_Z);


        horizontalLayout_21->addWidget(widget_10);


        verticalLayout_14->addWidget(widget_Chart_Coordinate);

        widget_24 = new QWidget(groupBox_5);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setStyleSheet(QString::fromUtf8("\n"
"border:none;\n"
""));
        horizontalLayout_20 = new QHBoxLayout(widget_24);
        horizontalLayout_20->setSpacing(24);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget_24);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(widget_9);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_6->addWidget(label);

        lcdNumber_X = new QLCDNumber(widget_9);
        lcdNumber_X->setObjectName(QString::fromUtf8("lcdNumber_X"));
        QFont font18;
        font18.setBold(false);
        font18.setItalic(false);
        font18.setWeight(50);
        lcdNumber_X->setFont(font18);
        lcdNumber_X->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; "));
        lcdNumber_X->setSmallDecimalPoint(true);
        lcdNumber_X->setDigitCount(10);
        lcdNumber_X->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_X->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_X->setProperty("intValue", QVariant(20));

        horizontalLayout_6->addWidget(lcdNumber_X);

        label_23 = new QLabel(widget_9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QFont font19;
        font19.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font19.setBold(true);
        font19.setItalic(false);
        font19.setWeight(75);
        label_23->setFont(font19);
        label_23->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_6->addWidget(label_23);


        horizontalLayout_20->addWidget(widget_9);

        widget_11 = new QWidget(widget_24);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_11 = new QHBoxLayout(widget_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_14 = new QLabel(widget_11);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_11->addWidget(label_14);

        lcdNumber_Y = new QLCDNumber(widget_11);
        lcdNumber_Y->setObjectName(QString::fromUtf8("lcdNumber_Y"));
        lcdNumber_Y->setFont(font18);
        lcdNumber_Y->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; "));
        lcdNumber_Y->setSmallDecimalPoint(true);
        lcdNumber_Y->setDigitCount(10);
        lcdNumber_Y->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Y->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_Y->setProperty("intValue", QVariant(20));

        horizontalLayout_11->addWidget(lcdNumber_Y);

        label_24 = new QLabel(widget_11);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_11->addWidget(label_24);


        horizontalLayout_20->addWidget(widget_11);

        widget_14 = new QWidget(widget_24);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_12 = new QHBoxLayout(widget_14);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_19 = new QLabel(widget_14);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_12->addWidget(label_19);

        lcdNumber_Z = new QLCDNumber(widget_14);
        lcdNumber_Z->setObjectName(QString::fromUtf8("lcdNumber_Z"));
        lcdNumber_Z->setFont(font18);
        lcdNumber_Z->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; "));
        lcdNumber_Z->setSmallDecimalPoint(true);
        lcdNumber_Z->setDigitCount(10);
        lcdNumber_Z->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Z->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_Z->setProperty("intValue", QVariant(20));

        horizontalLayout_12->addWidget(lcdNumber_Z);

        label_25 = new QLabel(widget_14);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_12->addWidget(label_25);


        horizontalLayout_20->addWidget(widget_14);


        verticalLayout_14->addWidget(widget_24);

        widget_Chart_Angle = new QChartView(groupBox_5);
        widget_Chart_Angle->setObjectName(QString::fromUtf8("widget_Chart_Angle"));
        widget_Chart_Angle->setStyleSheet(QString::fromUtf8("background-color:#434e59;"));
        horizontalLayout_5 = new QHBoxLayout(widget_Chart_Angle);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(495, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget_Chart_Angle);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setFont(font16);
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_Mx = new QCheckBox(widget_3);
        checkBox_Mx->setObjectName(QString::fromUtf8("checkBox_Mx"));
        checkBox_Mx->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Mx->setChecked(true);

        verticalLayout_2->addWidget(checkBox_Mx);

        checkBox_My = new QCheckBox(widget_3);
        checkBox_My->setObjectName(QString::fromUtf8("checkBox_My"));
        checkBox_My->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_My->setChecked(true);

        verticalLayout_2->addWidget(checkBox_My);

        checkBox_Mz = new QCheckBox(widget_3);
        checkBox_Mz->setObjectName(QString::fromUtf8("checkBox_Mz"));
        checkBox_Mz->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Mz->setChecked(true);

        verticalLayout_2->addWidget(checkBox_Mz);


        horizontalLayout_5->addWidget(widget_3);


        verticalLayout_14->addWidget(widget_Chart_Angle);

        widget_25 = new QWidget(groupBox_5);
        widget_25->setObjectName(QString::fromUtf8("widget_25"));
        widget_25->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        horizontalLayout_22 = new QHBoxLayout(widget_25);
        horizontalLayout_22->setSpacing(24);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        widget_26 = new QWidget(widget_25);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        widget_26->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_23 = new QHBoxLayout(widget_26);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_20 = new QLabel(widget_26);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_23->addWidget(label_20);

        lcdNumber_A = new QLCDNumber(widget_26);
        lcdNumber_A->setObjectName(QString::fromUtf8("lcdNumber_A"));
        lcdNumber_A->setFont(font18);
        lcdNumber_A->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; "));
        lcdNumber_A->setSmallDecimalPoint(true);
        lcdNumber_A->setDigitCount(9);
        lcdNumber_A->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_A->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_A->setProperty("intValue", QVariant(20));

        horizontalLayout_23->addWidget(lcdNumber_A);

        label_26 = new QLabel(widget_26);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_23->addWidget(label_26);


        horizontalLayout_22->addWidget(widget_26);

        widget_27 = new QWidget(widget_25);
        widget_27->setObjectName(QString::fromUtf8("widget_27"));
        widget_27->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_24 = new QHBoxLayout(widget_27);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_21 = new QLabel(widget_27);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_24->addWidget(label_21);

        lcdNumber_B = new QLCDNumber(widget_27);
        lcdNumber_B->setObjectName(QString::fromUtf8("lcdNumber_B"));
        lcdNumber_B->setFont(font18);
        lcdNumber_B->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; "));
        lcdNumber_B->setSmallDecimalPoint(true);
        lcdNumber_B->setDigitCount(9);
        lcdNumber_B->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_B->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_B->setProperty("intValue", QVariant(20));

        horizontalLayout_24->addWidget(lcdNumber_B);

        label_27 = new QLabel(widget_27);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;\n"
"border-width:0px;\n"
""));

        horizontalLayout_24->addWidget(label_27);


        horizontalLayout_22->addWidget(widget_27);

        widget_28 = new QWidget(widget_25);
        widget_28->setObjectName(QString::fromUtf8("widget_28"));
        widget_28->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_25 = new QHBoxLayout(widget_28);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_22 = new QLabel(widget_28);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_25->addWidget(label_22);

        lcdNumber_C = new QLCDNumber(widget_28);
        lcdNumber_C->setObjectName(QString::fromUtf8("lcdNumber_C"));
        QFont font20;
        font20.setPointSize(16);
        lcdNumber_C->setFont(font20);
        lcdNumber_C->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_C->setSmallDecimalPoint(true);
        lcdNumber_C->setDigitCount(9);
        lcdNumber_C->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_C->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_C->setProperty("intValue", QVariant(20));

        horizontalLayout_25->addWidget(lcdNumber_C);

        label_28 = new QLabel(widget_28);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_25->addWidget(label_28);


        horizontalLayout_22->addWidget(widget_28);


        verticalLayout_14->addWidget(widget_25);

        verticalLayout_14->setStretch(0, 4);
        verticalLayout_14->setStretch(1, 1);
        verticalLayout_14->setStretch(2, 4);
        verticalLayout_14->setStretch(3, 1);

        verticalLayout_4->addLayout(verticalLayout_14);


        horizontalLayout_2->addWidget(groupBox_5);


        horizontalLayout->addWidget(widget_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_30->addWidget(widget);

        verticalLayout_30->setStretch(0, 6);
        groupBox_Force_2 = new QGroupBox(tab_main);
        groupBox_Force_2->setObjectName(QString::fromUtf8("groupBox_Force_2"));
        groupBox_Force_2->setGeometry(QRect(1300, 310, 299, 136));
        groupBox_Force_2->setFont(font14);
        groupBox_Force_2->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_Force_2);
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(12, 36, 12, 0);
        toolButton_Sensor_Demarcate = new QToolButton(groupBox_Force_2);
        toolButton_Sensor_Demarcate->setObjectName(QString::fromUtf8("toolButton_Sensor_Demarcate"));
        sizePolicy3.setHeightForWidth(toolButton_Sensor_Demarcate->sizePolicy().hasHeightForWidth());
        toolButton_Sensor_Demarcate->setSizePolicy(sizePolicy3);
        QFont font21;
        font21.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font21.setPointSize(20);
        font21.setKerning(true);
        toolButton_Sensor_Demarcate->setFont(font21);
        toolButton_Sensor_Demarcate->setContextMenuPolicy(Qt::CustomContextMenu);
        toolButton_Sensor_Demarcate->setAcceptDrops(false);
        toolButton_Sensor_Demarcate->setLayoutDirection(Qt::LeftToRight);
        toolButton_Sensor_Demarcate->setAutoFillBackground(false);
        toolButton_Sensor_Demarcate->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/Demarcate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Sensor_Demarcate->setIcon(icon12);
        toolButton_Sensor_Demarcate->setIconSize(QSize(50, 50));
        toolButton_Sensor_Demarcate->setAutoRepeat(false);
        toolButton_Sensor_Demarcate->setAutoExclusive(false);
        toolButton_Sensor_Demarcate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_10->addWidget(toolButton_Sensor_Demarcate, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        toolButton_Sensor_Calculate = new QToolButton(groupBox_Force_2);
        toolButton_Sensor_Calculate->setObjectName(QString::fromUtf8("toolButton_Sensor_Calculate"));
        toolButton_Sensor_Calculate->setEnabled(true);
        sizePolicy3.setHeightForWidth(toolButton_Sensor_Calculate->sizePolicy().hasHeightForWidth());
        toolButton_Sensor_Calculate->setSizePolicy(sizePolicy3);
        toolButton_Sensor_Calculate->setFont(font21);
        toolButton_Sensor_Calculate->setContextMenuPolicy(Qt::CustomContextMenu);
        toolButton_Sensor_Calculate->setAcceptDrops(false);
        toolButton_Sensor_Calculate->setLayoutDirection(Qt::LeftToRight);
        toolButton_Sensor_Calculate->setAutoFillBackground(false);
        toolButton_Sensor_Calculate->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/calculation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Sensor_Calculate->setIcon(icon13);
        toolButton_Sensor_Calculate->setIconSize(QSize(50, 50));
        toolButton_Sensor_Calculate->setAutoRepeat(false);
        toolButton_Sensor_Calculate->setAutoExclusive(false);
        toolButton_Sensor_Calculate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_10->addWidget(toolButton_Sensor_Calculate, 0, Qt::AlignVCenter);

        toolButton_Sensor_Compensate = new QToolButton(groupBox_Force_2);
        toolButton_Sensor_Compensate->setObjectName(QString::fromUtf8("toolButton_Sensor_Compensate"));
        sizePolicy3.setHeightForWidth(toolButton_Sensor_Compensate->sizePolicy().hasHeightForWidth());
        toolButton_Sensor_Compensate->setSizePolicy(sizePolicy3);
        QFont font22;
        font22.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font22.setPointSize(20);
        toolButton_Sensor_Compensate->setFont(font22);
        toolButton_Sensor_Compensate->setContextMenuPolicy(Qt::CustomContextMenu);
        toolButton_Sensor_Compensate->setLayoutDirection(Qt::LeftToRight);
        toolButton_Sensor_Compensate->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/Compensate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Sensor_Compensate->setIcon(icon14);
        toolButton_Sensor_Compensate->setIconSize(QSize(50, 50));
        toolButton_Sensor_Compensate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_10->addWidget(toolButton_Sensor_Compensate, 0, Qt::AlignVCenter);

        groupBox_Force_4 = new QGroupBox(tab_main);
        groupBox_Force_4->setObjectName(QString::fromUtf8("groupBox_Force_4"));
        groupBox_Force_4->setGeometry(QRect(1510, 510, 153, 174));
        groupBox_Force_4->setFont(font14);
        groupBox_Force_4->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout_19 = new QVBoxLayout(groupBox_Force_4);
        verticalLayout_19->setSpacing(12);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(12, 12, 12, 12);
        toolButton_Sensor_Monitor = new QToolButton(groupBox_Force_4);
        toolButton_Sensor_Monitor->setObjectName(QString::fromUtf8("toolButton_Sensor_Monitor"));
        sizePolicy4.setHeightForWidth(toolButton_Sensor_Monitor->sizePolicy().hasHeightForWidth());
        toolButton_Sensor_Monitor->setSizePolicy(sizePolicy4);
        toolButton_Sensor_Monitor->setFont(font13);
        toolButton_Sensor_Monitor->setContextMenuPolicy(Qt::CustomContextMenu);
        toolButton_Sensor_Monitor->setLayoutDirection(Qt::LeftToRight);
        toolButton_Sensor_Monitor->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/icons/monitorOnW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Sensor_Monitor->setIcon(icon15);
        toolButton_Sensor_Monitor->setIconSize(QSize(60, 60));
        toolButton_Sensor_Monitor->setAutoRepeat(false);
        toolButton_Sensor_Monitor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_19->addWidget(toolButton_Sensor_Monitor, 0, Qt::AlignHCenter);

        toolButton_Camera_Start = new QToolButton(groupBox_Force_4);
        toolButton_Camera_Start->setObjectName(QString::fromUtf8("toolButton_Camera_Start"));
        toolButton_Camera_Start->setFont(font13);
        toolButton_Camera_Start->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        toolButton_Camera_Start->setIcon(icon6);
        toolButton_Camera_Start->setIconSize(QSize(60, 60));
        toolButton_Camera_Start->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_19->addWidget(toolButton_Camera_Start, 0, Qt::AlignHCenter);

        groupBox_Force_3 = new QGroupBox(tab_main);
        groupBox_Force_3->setObjectName(QString::fromUtf8("groupBox_Force_3"));
        groupBox_Force_3->setGeometry(QRect(1360, 490, 105, 148));
        groupBox_Force_3->setFont(font14);
        groupBox_Force_3->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        horizontalLayout_26 = new QHBoxLayout(groupBox_Force_3);
        horizontalLayout_26->setSpacing(20);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(12, 36, 12, 12);
        toolButton_Sensor_Calculate_2 = new QToolButton(groupBox_Force_3);
        toolButton_Sensor_Calculate_2->setObjectName(QString::fromUtf8("toolButton_Sensor_Calculate_2"));
        toolButton_Sensor_Calculate_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(toolButton_Sensor_Calculate_2->sizePolicy().hasHeightForWidth());
        toolButton_Sensor_Calculate_2->setSizePolicy(sizePolicy3);
        toolButton_Sensor_Calculate_2->setFont(font21);
        toolButton_Sensor_Calculate_2->setContextMenuPolicy(Qt::CustomContextMenu);
        toolButton_Sensor_Calculate_2->setAcceptDrops(false);
        toolButton_Sensor_Calculate_2->setLayoutDirection(Qt::LeftToRight);
        toolButton_Sensor_Calculate_2->setAutoFillBackground(false);
        toolButton_Sensor_Calculate_2->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:20px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Sensor_Calculate_2->setIcon(icon13);
        toolButton_Sensor_Calculate_2->setIconSize(QSize(50, 50));
        toolButton_Sensor_Calculate_2->setAutoRepeat(false);
        toolButton_Sensor_Calculate_2->setAutoExclusive(false);
        toolButton_Sensor_Calculate_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_26->addWidget(toolButton_Sensor_Calculate_2, 0, Qt::AlignVCenter);

        groupBox_PositionControl_2 = new QGroupBox(tab_main);
        groupBox_PositionControl_2->setObjectName(QString::fromUtf8("groupBox_PositionControl_2"));
        groupBox_PositionControl_2->setGeometry(QRect(10, 470, 1222, 331));
        groupBox_PositionControl_2->setFont(font4);
        groupBox_PositionControl_2->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        horizontalLayout_48 = new QHBoxLayout(groupBox_PositionControl_2);
        horizontalLayout_48->setSpacing(24);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        horizontalLayout_48->setContentsMargins(24, 36, 24, 24);
        groupBox_7 = new QGroupBox(groupBox_PositionControl_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"font: \"Times New Roman\" 24px;"));
        groupBox_7->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox_7->setFlat(false);
        horizontalLayout_51 = new QHBoxLayout(groupBox_7);
        horizontalLayout_51->setSpacing(12);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(24, 24, 24, 24);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(12, -1, 12, -1);
        widget_49 = new QWidget(groupBox_7);
        widget_49->setObjectName(QString::fromUtf8("widget_49"));
        widget_49->setStyleSheet(QString::fromUtf8("font: \"Times New Roman\" 24px;\n"
""));
        horizontalLayout_60 = new QHBoxLayout(widget_49);
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        horizontalLayout_60->setContentsMargins(6, 6, 6, 6);
        label_53 = new QLabel(widget_49);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_60->addWidget(label_53);

        doubleSpinBox_Position_X_3 = new QDoubleSpinBox(widget_49);
        doubleSpinBox_Position_X_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_X_3"));
        doubleSpinBox_Position_X_3->setFont(font9);
        doubleSpinBox_Position_X_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_X_3->setAcceptDrops(false);
        doubleSpinBox_Position_X_3->setAutoFillBackground(false);
        doubleSpinBox_Position_X_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_X_3->setFrame(true);
        doubleSpinBox_Position_X_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_X_3->setDecimals(3);
        doubleSpinBox_Position_X_3->setMaximum(999.990000000000009);
        doubleSpinBox_Position_X_3->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_X_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_60->addWidget(doubleSpinBox_Position_X_3);

        label_54 = new QLabel(widget_49);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_60->addWidget(label_54);

        Minius_X_2 = new QPushButton(widget_49);
        Minius_X_2->setObjectName(QString::fromUtf8("Minius_X_2"));
        Minius_X_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_X_2->setIcon(icon);
        Minius_X_2->setIconSize(QSize(40, 40));
        Minius_X_2->setFlat(true);

        horizontalLayout_60->addWidget(Minius_X_2);

        Plus_X_2 = new QPushButton(widget_49);
        Plus_X_2->setObjectName(QString::fromUtf8("Plus_X_2"));
        Plus_X_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_X_2->setIcon(icon1);
        Plus_X_2->setIconSize(QSize(40, 40));
        Plus_X_2->setFlat(true);

        horizontalLayout_60->addWidget(Plus_X_2);

        Zero_X_2 = new QPushButton(widget_49);
        Zero_X_2->setObjectName(QString::fromUtf8("Zero_X_2"));
        Zero_X_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_X_2->setIcon(icon2);
        Zero_X_2->setIconSize(QSize(40, 40));
        Zero_X_2->setFlat(true);

        horizontalLayout_60->addWidget(Zero_X_2);


        verticalLayout_13->addWidget(widget_49);

        widget_50 = new QWidget(groupBox_7);
        widget_50->setObjectName(QString::fromUtf8("widget_50"));
        horizontalLayout_61 = new QHBoxLayout(widget_50);
        horizontalLayout_61->setSpacing(6);
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        horizontalLayout_61->setContentsMargins(6, 6, 6, 6);
        label_55 = new QLabel(widget_50);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_61->addWidget(label_55);

        doubleSpinBox_Position_Y_3 = new QDoubleSpinBox(widget_50);
        doubleSpinBox_Position_Y_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Y_3"));
        doubleSpinBox_Position_Y_3->setFont(font9);
        doubleSpinBox_Position_Y_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Y_3->setAcceptDrops(false);
        doubleSpinBox_Position_Y_3->setAutoFillBackground(false);
        doubleSpinBox_Position_Y_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_Y_3->setFrame(true);
        doubleSpinBox_Position_Y_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Y_3->setDecimals(3);
        doubleSpinBox_Position_Y_3->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Y_3->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_Y_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_61->addWidget(doubleSpinBox_Position_Y_3);

        label_58 = new QLabel(widget_50);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_61->addWidget(label_58);

        Minius_Y_2 = new QPushButton(widget_50);
        Minius_Y_2->setObjectName(QString::fromUtf8("Minius_Y_2"));
        Minius_Y_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_Y_2->setIcon(icon);
        Minius_Y_2->setIconSize(QSize(40, 40));
        Minius_Y_2->setFlat(true);

        horizontalLayout_61->addWidget(Minius_Y_2);

        Plus_Y_2 = new QPushButton(widget_50);
        Plus_Y_2->setObjectName(QString::fromUtf8("Plus_Y_2"));
        Plus_Y_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_Y_2->setIcon(icon1);
        Plus_Y_2->setIconSize(QSize(40, 40));
        Plus_Y_2->setFlat(true);

        horizontalLayout_61->addWidget(Plus_Y_2);

        Zero_Y_2 = new QPushButton(widget_50);
        Zero_Y_2->setObjectName(QString::fromUtf8("Zero_Y_2"));
        Zero_Y_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_Y_2->setIcon(icon2);
        Zero_Y_2->setIconSize(QSize(40, 40));
        Zero_Y_2->setFlat(true);

        horizontalLayout_61->addWidget(Zero_Y_2);


        verticalLayout_13->addWidget(widget_50);

        widget_51 = new QWidget(groupBox_7);
        widget_51->setObjectName(QString::fromUtf8("widget_51"));
        horizontalLayout_62 = new QHBoxLayout(widget_51);
        horizontalLayout_62->setSpacing(6);
        horizontalLayout_62->setObjectName(QString::fromUtf8("horizontalLayout_62"));
        horizontalLayout_62->setContentsMargins(6, 6, 6, 6);
        label_59 = new QLabel(widget_51);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_62->addWidget(label_59);

        doubleSpinBox_Position_Z_3 = new QDoubleSpinBox(widget_51);
        doubleSpinBox_Position_Z_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Z_3"));
        doubleSpinBox_Position_Z_3->setFont(font9);
        doubleSpinBox_Position_Z_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Z_3->setAcceptDrops(false);
        doubleSpinBox_Position_Z_3->setAutoFillBackground(false);
        doubleSpinBox_Position_Z_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_Z_3->setFrame(true);
        doubleSpinBox_Position_Z_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Z_3->setDecimals(3);
        doubleSpinBox_Position_Z_3->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Z_3->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_Z_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_62->addWidget(doubleSpinBox_Position_Z_3);

        label_60 = new QLabel(widget_51);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_62->addWidget(label_60);

        Minius_Z_2 = new QPushButton(widget_51);
        Minius_Z_2->setObjectName(QString::fromUtf8("Minius_Z_2"));
        Minius_Z_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_Z_2->setIcon(icon);
        Minius_Z_2->setIconSize(QSize(40, 40));
        Minius_Z_2->setFlat(true);

        horizontalLayout_62->addWidget(Minius_Z_2);

        Plus_Z_2 = new QPushButton(widget_51);
        Plus_Z_2->setObjectName(QString::fromUtf8("Plus_Z_2"));
        Plus_Z_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_Z_2->setIcon(icon1);
        Plus_Z_2->setIconSize(QSize(40, 40));
        Plus_Z_2->setFlat(true);

        horizontalLayout_62->addWidget(Plus_Z_2);

        Zero_Z_2 = new QPushButton(widget_51);
        Zero_Z_2->setObjectName(QString::fromUtf8("Zero_Z_2"));
        Zero_Z_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_Z_2->setIcon(icon2);
        Zero_Z_2->setIconSize(QSize(40, 40));
        Zero_Z_2->setFlat(true);

        horizontalLayout_62->addWidget(Zero_Z_2);


        verticalLayout_13->addWidget(widget_51);


        horizontalLayout_51->addLayout(verticalLayout_13);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(12, -1, 12, -1);
        widget_52 = new QWidget(groupBox_7);
        widget_52->setObjectName(QString::fromUtf8("widget_52"));
        horizontalLayout_63 = new QHBoxLayout(widget_52);
        horizontalLayout_63->setSpacing(6);
        horizontalLayout_63->setObjectName(QString::fromUtf8("horizontalLayout_63"));
        horizontalLayout_63->setContentsMargins(6, 6, 6, 6);
        label_61 = new QLabel(widget_52);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_63->addWidget(label_61);

        doubleSpinBox_Position_A_3 = new QDoubleSpinBox(widget_52);
        doubleSpinBox_Position_A_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_A_3"));
        doubleSpinBox_Position_A_3->setFont(font9);
        doubleSpinBox_Position_A_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_A_3->setAcceptDrops(false);
        doubleSpinBox_Position_A_3->setAutoFillBackground(false);
        doubleSpinBox_Position_A_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_A_3->setFrame(true);
        doubleSpinBox_Position_A_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_A_3->setDecimals(3);
        doubleSpinBox_Position_A_3->setMaximum(360.000000000000000);
        doubleSpinBox_Position_A_3->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_A_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_63->addWidget(doubleSpinBox_Position_A_3);

        label_62 = new QLabel(widget_52);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_63->addWidget(label_62);

        Minius_A_2 = new QPushButton(widget_52);
        Minius_A_2->setObjectName(QString::fromUtf8("Minius_A_2"));
        Minius_A_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_A_2->setIcon(icon);
        Minius_A_2->setIconSize(QSize(40, 40));
        Minius_A_2->setFlat(true);

        horizontalLayout_63->addWidget(Minius_A_2);

        Plus_A_2 = new QPushButton(widget_52);
        Plus_A_2->setObjectName(QString::fromUtf8("Plus_A_2"));
        Plus_A_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_A_2->setIcon(icon1);
        Plus_A_2->setIconSize(QSize(40, 40));
        Plus_A_2->setFlat(true);

        horizontalLayout_63->addWidget(Plus_A_2);

        Zero_A_2 = new QPushButton(widget_52);
        Zero_A_2->setObjectName(QString::fromUtf8("Zero_A_2"));
        Zero_A_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_A_2->setIcon(icon2);
        Zero_A_2->setIconSize(QSize(40, 40));
        Zero_A_2->setFlat(true);

        horizontalLayout_63->addWidget(Zero_A_2);


        verticalLayout_16->addWidget(widget_52);

        widget_53 = new QWidget(groupBox_7);
        widget_53->setObjectName(QString::fromUtf8("widget_53"));
        horizontalLayout_64 = new QHBoxLayout(widget_53);
        horizontalLayout_64->setSpacing(6);
        horizontalLayout_64->setObjectName(QString::fromUtf8("horizontalLayout_64"));
        horizontalLayout_64->setContentsMargins(6, 6, 6, 6);
        label_63 = new QLabel(widget_53);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_64->addWidget(label_63);

        doubleSpinBox_Position_B_3 = new QDoubleSpinBox(widget_53);
        doubleSpinBox_Position_B_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_B_3"));
        doubleSpinBox_Position_B_3->setFont(font9);
        doubleSpinBox_Position_B_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_B_3->setAcceptDrops(false);
        doubleSpinBox_Position_B_3->setAutoFillBackground(false);
        doubleSpinBox_Position_B_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_B_3->setFrame(true);
        doubleSpinBox_Position_B_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_B_3->setDecimals(3);
        doubleSpinBox_Position_B_3->setMaximum(360.000000000000000);
        doubleSpinBox_Position_B_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_64->addWidget(doubleSpinBox_Position_B_3);

        label_64 = new QLabel(widget_53);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_64->addWidget(label_64);

        Minius_B_2 = new QPushButton(widget_53);
        Minius_B_2->setObjectName(QString::fromUtf8("Minius_B_2"));
        Minius_B_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_B_2->setIcon(icon);
        Minius_B_2->setIconSize(QSize(40, 40));
        Minius_B_2->setFlat(true);

        horizontalLayout_64->addWidget(Minius_B_2);

        Plus_B_2 = new QPushButton(widget_53);
        Plus_B_2->setObjectName(QString::fromUtf8("Plus_B_2"));
        Plus_B_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_B_2->setIcon(icon1);
        Plus_B_2->setIconSize(QSize(40, 40));
        Plus_B_2->setFlat(true);

        horizontalLayout_64->addWidget(Plus_B_2);

        Zero_B_2 = new QPushButton(widget_53);
        Zero_B_2->setObjectName(QString::fromUtf8("Zero_B_2"));
        Zero_B_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_B_2->setIcon(icon2);
        Zero_B_2->setIconSize(QSize(40, 40));
        Zero_B_2->setFlat(true);

        horizontalLayout_64->addWidget(Zero_B_2);


        verticalLayout_16->addWidget(widget_53);

        widget_54 = new QWidget(groupBox_7);
        widget_54->setObjectName(QString::fromUtf8("widget_54"));
        horizontalLayout_65 = new QHBoxLayout(widget_54);
        horizontalLayout_65->setSpacing(6);
        horizontalLayout_65->setObjectName(QString::fromUtf8("horizontalLayout_65"));
        horizontalLayout_65->setContentsMargins(6, 6, 6, 6);
        label_65 = new QLabel(widget_54);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_65->addWidget(label_65);

        doubleSpinBox_Position_C_3 = new QDoubleSpinBox(widget_54);
        doubleSpinBox_Position_C_3->setObjectName(QString::fromUtf8("doubleSpinBox_Position_C_3"));
        doubleSpinBox_Position_C_3->setFont(font9);
        doubleSpinBox_Position_C_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_C_3->setAcceptDrops(false);
        doubleSpinBox_Position_C_3->setAutoFillBackground(false);
        doubleSpinBox_Position_C_3->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Position_C_3->setFrame(true);
        doubleSpinBox_Position_C_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_C_3->setDecimals(3);
        doubleSpinBox_Position_C_3->setMaximum(360.000000000000000);
        doubleSpinBox_Position_C_3->setSingleStep(0.001000000000000);
        doubleSpinBox_Position_C_3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_65->addWidget(doubleSpinBox_Position_C_3);

        label_66 = new QLabel(widget_54);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_65->addWidget(label_66);

        Minius_C_2 = new QPushButton(widget_54);
        Minius_C_2->setObjectName(QString::fromUtf8("Minius_C_2"));
        Minius_C_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Minius_C_2->setIcon(icon);
        Minius_C_2->setIconSize(QSize(40, 40));
        Minius_C_2->setFlat(true);

        horizontalLayout_65->addWidget(Minius_C_2);

        Plus_C_2 = new QPushButton(widget_54);
        Plus_C_2->setObjectName(QString::fromUtf8("Plus_C_2"));
        Plus_C_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Plus_C_2->setIcon(icon1);
        Plus_C_2->setIconSize(QSize(40, 40));
        Plus_C_2->setFlat(true);

        horizontalLayout_65->addWidget(Plus_C_2);

        Zero_C_2 = new QPushButton(widget_54);
        Zero_C_2->setObjectName(QString::fromUtf8("Zero_C_2"));
        Zero_C_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-radius:3px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:rgb(179, 179, 255);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_C_2->setIcon(icon2);
        Zero_C_2->setIconSize(QSize(40, 40));
        Zero_C_2->setFlat(true);

        horizontalLayout_65->addWidget(Zero_C_2);


        verticalLayout_16->addWidget(widget_54);


        horizontalLayout_51->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(12, 12, -1, -1);
        widget_55 = new QWidget(groupBox_7);
        widget_55->setObjectName(QString::fromUtf8("widget_55"));
        widget_55->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_66 = new QHBoxLayout(widget_55);
        horizontalLayout_66->setObjectName(QString::fromUtf8("horizontalLayout_66"));
        horizontalLayout_66->setContentsMargins(3, 3, 3, 3);
        label_67 = new QLabel(widget_55);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        sizePolicy1.setHeightForWidth(label_67->sizePolicy().hasHeightForWidth());
        label_67->setSizePolicy(sizePolicy1);
        label_67->setFont(font10);
        label_67->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_66->addWidget(label_67);

        toolButton_MovePattern_2 = new QPushButton(widget_55);
        toolButton_MovePattern_2->setObjectName(QString::fromUtf8("toolButton_MovePattern_2"));
        sizePolicy2.setHeightForWidth(toolButton_MovePattern_2->sizePolicy().hasHeightForWidth());
        toolButton_MovePattern_2->setSizePolicy(sizePolicy2);
        toolButton_MovePattern_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
""));
        toolButton_MovePattern_2->setIcon(icon3);
        toolButton_MovePattern_2->setIconSize(QSize(80, 40));
        toolButton_MovePattern_2->setFlat(true);

        horizontalLayout_66->addWidget(toolButton_MovePattern_2);


        verticalLayout_17->addWidget(widget_55);

        widget_56 = new QWidget(groupBox_7);
        widget_56->setObjectName(QString::fromUtf8("widget_56"));
        widget_56->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_67 = new QHBoxLayout(widget_56);
        horizontalLayout_67->setObjectName(QString::fromUtf8("horizontalLayout_67"));
        horizontalLayout_67->setContentsMargins(3, 3, 3, 3);
        label_68 = new QLabel(widget_56);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        sizePolicy1.setHeightForWidth(label_68->sizePolicy().hasHeightForWidth());
        label_68->setSizePolicy(sizePolicy1);
        label_68->setFont(font10);
        label_68->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;\n"
""));

        horizontalLayout_67->addWidget(label_68);

        comboBox_2 = new QComboBox(widget_56);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font11);
        comboBox_2->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color:white"));
        comboBox_2->setEditable(false);
        comboBox_2->setModelColumn(0);

        horizontalLayout_67->addWidget(comboBox_2);

        horizontalLayout_67->setStretch(0, 2);
        horizontalLayout_67->setStretch(1, 1);

        verticalLayout_17->addWidget(widget_56);

        horizontalLayout_68 = new QHBoxLayout();
        horizontalLayout_68->setObjectName(QString::fromUtf8("horizontalLayout_68"));
        Zero_All_2 = new QToolButton(groupBox_7);
        Zero_All_2->setObjectName(QString::fromUtf8("Zero_All_2"));
        Zero_All_2->setFont(font12);
        Zero_All_2->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        Zero_All_2->setIcon(icon2);
        Zero_All_2->setIconSize(QSize(60, 60));
        Zero_All_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_68->addWidget(Zero_All_2);

        toolButton_Submit_2 = new QToolButton(groupBox_7);
        toolButton_Submit_2->setObjectName(QString::fromUtf8("toolButton_Submit_2"));
        toolButton_Submit_2->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_Submit_2->sizePolicy().hasHeightForWidth());
        toolButton_Submit_2->setSizePolicy(sizePolicy);
        toolButton_Submit_2->setFont(font12);
        toolButton_Submit_2->setMouseTracking(false);
        toolButton_Submit_2->setTabletTracking(false);
        toolButton_Submit_2->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"QToolButton:disabled\n"
"{\n"
"    background-color:grey;\n"
"}\n"
"border:none;"));
        toolButton_Submit_2->setIcon(icon4);
        toolButton_Submit_2->setIconSize(QSize(60, 60));
        toolButton_Submit_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_68->addWidget(toolButton_Submit_2);

        toolButton_SuddenStop_2 = new QToolButton(groupBox_7);
        toolButton_SuddenStop_2->setObjectName(QString::fromUtf8("toolButton_SuddenStop_2"));
        sizePolicy.setHeightForWidth(toolButton_SuddenStop_2->sizePolicy().hasHeightForWidth());
        toolButton_SuddenStop_2->setSizePolicy(sizePolicy);
        toolButton_SuddenStop_2->setMinimumSize(QSize(120, 0));
        toolButton_SuddenStop_2->setFont(font12);
        toolButton_SuddenStop_2->setMouseTracking(false);
        toolButton_SuddenStop_2->setTabletTracking(false);
        toolButton_SuddenStop_2->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"border:none;"));
        toolButton_SuddenStop_2->setIcon(icon5);
        toolButton_SuddenStop_2->setIconSize(QSize(60, 60));
        toolButton_SuddenStop_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_68->addWidget(toolButton_SuddenStop_2);

        horizontalLayout_68->setStretch(0, 1);
        horizontalLayout_68->setStretch(1, 1);
        horizontalLayout_68->setStretch(2, 1);

        verticalLayout_17->addLayout(horizontalLayout_68);


        horizontalLayout_51->addLayout(verticalLayout_17);


        horizontalLayout_48->addWidget(groupBox_7);

        tabWidget->addTab(tab_main, QString());

        verticalLayout->addWidget(tabWidget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 40));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color:white"));
        horizontalLayout_34 = new QHBoxLayout(widget_2);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_28 = new QHBoxLayout(widget_5);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_56 = new QLabel(widget_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_28->addWidget(label_56);

        label_29 = new QLabel(widget_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_28->addWidget(label_29, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_X_2 = new QDoubleSpinBox(widget_5);
        doubleSpinBox_Position_X_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_X_2"));
        doubleSpinBox_Position_X_2->setEnabled(false);
        doubleSpinBox_Position_X_2->setFont(font9);
        doubleSpinBox_Position_X_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_X_2->setAcceptDrops(false);
        doubleSpinBox_Position_X_2->setAutoFillBackground(false);
        doubleSpinBox_Position_X_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_X_2->setFrame(true);
        doubleSpinBox_Position_X_2->setReadOnly(true);
        doubleSpinBox_Position_X_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_X_2->setDecimals(3);
        doubleSpinBox_Position_X_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_X_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_28->addWidget(doubleSpinBox_Position_X_2);

        label_30 = new QLabel(widget_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_28->addWidget(label_30);


        horizontalLayout_34->addWidget(widget_5);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_37 = new QHBoxLayout(widget_8);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_36 = new QLabel(widget_8);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_37->addWidget(label_36, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_Y_2 = new QDoubleSpinBox(widget_8);
        doubleSpinBox_Position_Y_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Y_2"));
        doubleSpinBox_Position_Y_2->setEnabled(false);
        doubleSpinBox_Position_Y_2->setFont(font9);
        doubleSpinBox_Position_Y_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Y_2->setAcceptDrops(false);
        doubleSpinBox_Position_Y_2->setAutoFillBackground(false);
        doubleSpinBox_Position_Y_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_Y_2->setFrame(true);
        doubleSpinBox_Position_Y_2->setReadOnly(true);
        doubleSpinBox_Position_Y_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Y_2->setDecimals(3);
        doubleSpinBox_Position_Y_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Y_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_37->addWidget(doubleSpinBox_Position_Y_2);

        label_37 = new QLabel(widget_8);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_37->addWidget(label_37);


        horizontalLayout_34->addWidget(widget_8);

        widget_30 = new QWidget(widget_2);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        widget_30->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_38 = new QHBoxLayout(widget_30);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_38 = new QLabel(widget_30);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_38->addWidget(label_38, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_Z_2 = new QDoubleSpinBox(widget_30);
        doubleSpinBox_Position_Z_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Z_2"));
        doubleSpinBox_Position_Z_2->setEnabled(false);
        doubleSpinBox_Position_Z_2->setFont(font9);
        doubleSpinBox_Position_Z_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Z_2->setAcceptDrops(false);
        doubleSpinBox_Position_Z_2->setAutoFillBackground(false);
        doubleSpinBox_Position_Z_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_Z_2->setFrame(true);
        doubleSpinBox_Position_Z_2->setReadOnly(true);
        doubleSpinBox_Position_Z_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Z_2->setDecimals(3);
        doubleSpinBox_Position_Z_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Z_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_38->addWidget(doubleSpinBox_Position_Z_2);

        label_41 = new QLabel(widget_30);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_38->addWidget(label_41);


        horizontalLayout_34->addWidget(widget_30);

        widget_31 = new QWidget(widget_2);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        widget_31->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_39 = new QHBoxLayout(widget_31);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_43 = new QLabel(widget_31);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_39->addWidget(label_43, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_A_2 = new QDoubleSpinBox(widget_31);
        doubleSpinBox_Position_A_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_A_2"));
        doubleSpinBox_Position_A_2->setEnabled(false);
        doubleSpinBox_Position_A_2->setFont(font9);
        doubleSpinBox_Position_A_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_A_2->setAcceptDrops(false);
        doubleSpinBox_Position_A_2->setAutoFillBackground(false);
        doubleSpinBox_Position_A_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_A_2->setFrame(true);
        doubleSpinBox_Position_A_2->setReadOnly(true);
        doubleSpinBox_Position_A_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_A_2->setDecimals(3);
        doubleSpinBox_Position_A_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_A_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_39->addWidget(doubleSpinBox_Position_A_2);

        label_44 = new QLabel(widget_31);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_39->addWidget(label_44);


        horizontalLayout_34->addWidget(widget_31);

        widget_39 = new QWidget(widget_2);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_40 = new QHBoxLayout(widget_39);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_46 = new QLabel(widget_39);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_40->addWidget(label_46, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_B_2 = new QDoubleSpinBox(widget_39);
        doubleSpinBox_Position_B_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_B_2"));
        doubleSpinBox_Position_B_2->setEnabled(false);
        doubleSpinBox_Position_B_2->setFont(font9);
        doubleSpinBox_Position_B_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_B_2->setAcceptDrops(false);
        doubleSpinBox_Position_B_2->setAutoFillBackground(false);
        doubleSpinBox_Position_B_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_B_2->setFrame(true);
        doubleSpinBox_Position_B_2->setReadOnly(true);
        doubleSpinBox_Position_B_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_B_2->setDecimals(3);
        doubleSpinBox_Position_B_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_B_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_40->addWidget(doubleSpinBox_Position_B_2);

        label_47 = new QLabel(widget_39);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_40->addWidget(label_47);


        horizontalLayout_34->addWidget(widget_39);

        widget_40 = new QWidget(widget_2);
        widget_40->setObjectName(QString::fromUtf8("widget_40"));
        widget_40->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_41 = new QHBoxLayout(widget_40);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_49 = new QLabel(widget_40);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_41->addWidget(label_49, 0, Qt::AlignHCenter);

        doubleSpinBox_Position_C_2 = new QDoubleSpinBox(widget_40);
        doubleSpinBox_Position_C_2->setObjectName(QString::fromUtf8("doubleSpinBox_Position_C_2"));
        doubleSpinBox_Position_C_2->setEnabled(false);
        doubleSpinBox_Position_C_2->setFont(font9);
        doubleSpinBox_Position_C_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_C_2->setAcceptDrops(false);
        doubleSpinBox_Position_C_2->setAutoFillBackground(false);
        doubleSpinBox_Position_C_2->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"color: rgb(178, 181, 178);\n"
""));
        doubleSpinBox_Position_C_2->setFrame(true);
        doubleSpinBox_Position_C_2->setReadOnly(true);
        doubleSpinBox_Position_C_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_C_2->setDecimals(3);
        doubleSpinBox_Position_C_2->setMaximum(999.990000000000009);
        doubleSpinBox_Position_C_2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_41->addWidget(doubleSpinBox_Position_C_2);

        label_57 = new QLabel(widget_40);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_41->addWidget(label_57);


        horizontalLayout_34->addWidget(widget_40);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 12);
        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\212\344\275\215\346\234\272\347\233\221\346\265\213\346\216\247\345\210\266\347\263\273\347\273\237", nullptr));
        actionCameraOrentation->setText(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272\346\240\207\345\256\232", nullptr));
        actionAround_ForceGet->setText(QCoreApplication::translate("MainWindow", "\345\212\233\346\216\247\346\250\241\345\236\213\350\256\255\347\273\203", nullptr));
#if QT_CONFIG(tooltip)
        actionAround_ForceGet->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\233\346\216\247\346\250\241\345\236\213\350\256\255\347\273\203", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\351\205\215\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\351\205\215\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_Connection->setTitle(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\351\205\215\347\275\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PLC", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        lineEdit_PLC_Connect_IP->setText(QCoreApplication::translate("MainWindow", "192.168.2.121", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243:", nullptr));
        lineEdit_PLC_Connect_Port->setText(QCoreApplication::translate("MainWindow", "213", nullptr));
        toolButton_Connect_PLC->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label_Connect_PLC->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\345\212\233\344\274\240\346\204\237\345\231\250", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        lineEdit_Sensor_Connect_IP->setText(QCoreApplication::translate("MainWindow", "192.168.2.122", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243:", nullptr));
        lineEdit_Sensor_Connect_Port->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        toolButton_Connect_Sensor->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label_Connect_Sensor->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        lineEdit_Robot_Connect_IP->setText(QCoreApplication::translate("MainWindow", "192.168.2.123", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243:", nullptr));
        lineEdit_Robot_Connect_Port->setText(QCoreApplication::translate("MainWindow", "234", nullptr));
        toolButton_Connect_Robot->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label_Connect_Robot->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\267:", nullptr));
        lineEdit_Camera_Connect_IP->setText(QCoreApplication::translate("MainWindow", "1234AD23123", nullptr));
        toolButton_Connect_Camera->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label_Connect_Camera->setText(QString());
        groupBox_PositionControl->setTitle(QCoreApplication::translate("MainWindow", " \346\234\272\345\231\250\344\272\272\346\216\247\345\210\266\346\265\213\350\257\225", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "X\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_X->setText(QString());
        Plus_X->setText(QString());
        Zero_X->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Y\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_Y->setText(QString());
        Plus_Y->setText(QString());
        Zero_Y->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Z\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_Z->setText(QString());
        Plus_Z->setText(QString());
        Zero_Z->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "A\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_A->setText(QString());
        Plus_A->setText(QString());
        Zero_A->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "B\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_B->setText(QString());
        Plus_B->setText(QString());
        Zero_B->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "C\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_C->setText(QString());
        Plus_C->setText(QString());
        Zero_C->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "\347\202\271\345\212\250\357\274\232", nullptr));
        toolButton_MovePattern->setText(QString());
        label_32->setText(QCoreApplication::translate("MainWindow", "\345\200\215\347\216\207\357\274\232", nullptr));
        comboBox->setPlaceholderText(QString());
        Zero_All->setText(QCoreApplication::translate("MainWindow", "\345\275\222\351\233\266", nullptr));
        toolButton_Submit->setText(QCoreApplication::translate("MainWindow", " \346\211\247\350\241\214", nullptr));
        toolButton_SuddenStop->setText(QCoreApplication::translate("MainWindow", " \346\200\245\345\201\234", nullptr));
        groupBox_Force->setTitle(QCoreApplication::translate("MainWindow", "PLC\346\216\247\345\210\266\346\265\213\350\257\225", nullptr));
        label_PLC_Vacuum->setText(QString());
        label_42->setText(QCoreApplication::translate("MainWindow", "\350\264\237\345\216\213:", nullptr));
        pushButton_PLC_Vacuum->setText(QString());
        label_PLC_DestroyVacuum->setText(QString());
        label_45->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\216\213:", nullptr));
        pushButton_PLC_DestroyVacuum->setText(QString());
        label_PLC_SuckScrew->setText(QString());
        label_34->setText(QCoreApplication::translate("MainWindow", "\345\220\270\351\222\211:", nullptr));
        pushButton_PLC_SuckScrew->setText(QString());
        label_PLC_Tighten->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\213\247\347\264\247\357\274\232     ", nullptr));
        pushButton_PLC_Tighten->setText(QString());
        label_PLC_MultiGripper->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\244\344\276\247\345\220\270\347\233\230:", nullptr));
        pushButton_PLC_MultiGripper->setText(QString());
        label_PLC_SingleGripper->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\227\264\345\220\270\347\233\230:", nullptr));
        pushButton_PLC_SingleGripper->setText(QString());
        label_PLC_QuickChange->setText(QString());
        label_33->setText(QCoreApplication::translate("MainWindow", "\345\277\253\346\215\242\357\274\232      ", nullptr));
        toolButton_PLC_QuickChange->setText(QString());
        label_PLC_Light->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\205\211\346\272\220:         ", nullptr));
        toolButton_PLC_Light->setText(QString());
        groupBox_29->setTitle(QCoreApplication::translate("MainWindow", "\345\205\266\344\273\226IO\345\217\243", nullptr));
        label_PLC_IO->setText(QString());
        lineEdit_PLC_Connect_IO->setText(QCoreApplication::translate("MainWindow", "y31", nullptr));
        toolButton_PLC_IO->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabWidget_Settings), QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\216\346\265\213\350\257\225", nullptr));
        groupBox_9->setTitle(QString());
        picture->setText(QCoreApplication::translate("MainWindow", "\346\262\241\346\234\211\344\277\241\345\217\267", nullptr));
        CameraShot->setText(QCoreApplication::translate("MainWindow", "\345\220\257\n"
"\345\212\250", nullptr));
        Zoom_in->setText(QCoreApplication::translate("MainWindow", "\346\224\276\n"
"\345\244\247", nullptr));
        Zoom_out->setText(QCoreApplication::translate("MainWindow", "\347\274\251\n"
"\345\260\217", nullptr));
        toolButton_Camera_Shot->setText(QCoreApplication::translate("MainWindow", "\346\213\215\n"
"\347\205\247", nullptr));
        toolButton_Settings->setText(QCoreApplication::translate("MainWindow", "\350\256\276\n"
"\347\275\256", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "\350\267\257\n"
"\345\276\204", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\240\217", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "\345\210\240\n"
"\351\231\244", nullptr));
        caculate->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272\346\240\207\345\256\232", nullptr));
        point_Add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        point_Change->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        point_Remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_point_setting), QCoreApplication::translate("MainWindow", "\346\240\207\345\256\232\347\202\271\351\205\215\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_test), QCoreApplication::translate("MainWindow", " \351\205\215\347\275\256\344\270\216\350\260\203\350\257\225", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\346\234\253\347\253\257\347\233\270\346\234\272\347\233\221\346\265\213", nullptr));
        CameraWidget->setText(QCoreApplication::translate("MainWindow", "\346\227\240\344\277\241\345\217\267", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\212\233\344\274\240\346\204\237\346\225\260\346\215\256\347\233\221\346\265\213", nullptr));
        checkBox_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        checkBox_Y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        checkBox_Z->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        checkBox_Mx->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        checkBox_My->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        checkBox_Mz->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "N\302\267m", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "N\302\267m", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "N\302\267m", nullptr));
        groupBox_Force_2->setTitle(QCoreApplication::translate("MainWindow", "\350\257\257\345\267\256\350\241\245\345\201\277", nullptr));
        toolButton_Sensor_Demarcate->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\256\232", nullptr));
        toolButton_Sensor_Calculate->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        toolButton_Sensor_Compensate->setText(QCoreApplication::translate("MainWindow", "\350\241\245\345\201\277", nullptr));
        groupBox_Force_4->setTitle(QCoreApplication::translate("MainWindow", " \346\211\213\345\212\250 \347\233\221\346\265\213", nullptr));
        toolButton_Sensor_Monitor->setText(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272\n"
"\347\233\221\346\265\213", nullptr));
        toolButton_Camera_Start->setText(QCoreApplication::translate("MainWindow", "\345\212\233\344\274\240\n"
"\347\233\221\346\265\213", nullptr));
        groupBox_Force_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\207\207\351\233\206", nullptr));
        toolButton_Sensor_Calculate_2->setText(QCoreApplication::translate("MainWindow", " \345\220\257\345\212\250", nullptr));
        groupBox_PositionControl_2->setTitle(QCoreApplication::translate("MainWindow", " \346\234\272\345\231\250\344\272\272\346\216\247\345\210\266\346\265\213\350\257\225", nullptr));
        groupBox_7->setTitle(QString());
        label_53->setText(QCoreApplication::translate("MainWindow", "X\357\274\232", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_X_2->setText(QString());
        Plus_X_2->setText(QString());
        Zero_X_2->setText(QString());
        label_55->setText(QCoreApplication::translate("MainWindow", "Y\357\274\232", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_Y_2->setText(QString());
        Plus_Y_2->setText(QString());
        Zero_Y_2->setText(QString());
        label_59->setText(QCoreApplication::translate("MainWindow", "Z\357\274\232", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        Minius_Z_2->setText(QString());
        Plus_Z_2->setText(QString());
        Zero_Z_2->setText(QString());
        label_61->setText(QCoreApplication::translate("MainWindow", "A\357\274\232", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_A_2->setText(QString());
        Plus_A_2->setText(QString());
        Zero_A_2->setText(QString());
        label_63->setText(QCoreApplication::translate("MainWindow", "B\357\274\232", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_B_2->setText(QString());
        Plus_B_2->setText(QString());
        Zero_B_2->setText(QString());
        label_65->setText(QCoreApplication::translate("MainWindow", "C\357\274\232", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "deg", nullptr));
        Minius_C_2->setText(QString());
        Plus_C_2->setText(QString());
        Zero_C_2->setText(QString());
        label_67->setText(QCoreApplication::translate("MainWindow", "\347\202\271\345\212\250\357\274\232", nullptr));
        toolButton_MovePattern_2->setText(QString());
        label_68->setText(QCoreApplication::translate("MainWindow", "\345\200\215\347\216\207\357\274\232", nullptr));
        comboBox_2->setPlaceholderText(QString());
        Zero_All_2->setText(QCoreApplication::translate("MainWindow", "\345\275\222\351\233\266", nullptr));
        toolButton_Submit_2->setText(QCoreApplication::translate("MainWindow", " \346\211\247\350\241\214", nullptr));
        toolButton_SuddenStop_2->setText(QCoreApplication::translate("MainWindow", " \346\200\245\345\201\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("MainWindow", "\350\257\257\345\267\256\350\241\245\345\201\277\344\270\216\350\243\205\351\205\215\347\233\221\346\265\213", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\345\275\223\345\211\215\344\275\215\345\247\277    ", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "X\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Y\357\274\232", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Z\357\274\232", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "A\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "B\357\274\232", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "C\357\274\232", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
