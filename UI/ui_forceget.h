/********************************************************************************
** Form generated from reading UI file 'forceget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORCEGET_H
#define UI_FORCEGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_ForceGet
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QChartView *widget_Chart_Coordinate;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBox_X;
    QCheckBox *checkBox_Y;
    QCheckBox *checkBox_Z;
    QWidget *widget_29;
    QHBoxLayout *horizontalLayout_29;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLCDNumber *lcdNumber_X;
    QLabel *label_33;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLCDNumber *lcdNumber_Y;
    QLabel *label_34;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_35;
    QLCDNumber *lcdNumber_Z;
    QLabel *label_36;
    QChartView *widget_Chart_Angle;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox_A;
    QCheckBox *checkBox_B;
    QCheckBox *checkBox_C;
    QWidget *widget_33;
    QHBoxLayout *horizontalLayout_30;
    QWidget *widget_34;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_37;
    QLCDNumber *lcdNumber_MX;
    QLabel *label_38;
    QWidget *widget_35;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_39;
    QLCDNumber *lcdNumber_MY;
    QLabel *label_40;
    QWidget *widget_36;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_41;
    QLCDNumber *lcdNumber_MZ;
    QLabel *label_42;
    QGroupBox *groupBox_Force_4;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_30;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_32;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_31;
    QWidget *widget_37;
    QHBoxLayout *horizontalLayout_26;
    QDoubleSpinBox *doubleSpinBox_ForceAngel;
    QLabel *label_32;
    QWidget *widget_39;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_43;
    QWidget *widget_40;
    QHBoxLayout *horizontalLayout_34;
    QDoubleSpinBox *doubleSpinBox_Angel_Interval;
    QLabel *label_44;
    QWidget *widget_31;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_29;
    QWidget *widget_38;
    QHBoxLayout *horizontalLayout_27;
    QDoubleSpinBox *doubleSpinBox_ForceDistance;
    QLabel *label_30;
    QPushButton *pushButton_Sensor_Monitor;

    void setupUi(QDialog *ForceGet)
    {
        if (ForceGet->objectName().isEmpty())
            ForceGet->setObjectName(QString::fromUtf8("ForceGet"));
        ForceGet->resize(1472, 736);
        ForceGet->setStyleSheet(QString::fromUtf8("\n"
"background-color: #002140;"));
        horizontalLayout = new QHBoxLayout(ForceGet);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_5 = new QWidget(ForceGet);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;\n"
""));
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_Chart_Coordinate = new QChartView(widget_5);
        widget_Chart_Coordinate->setObjectName(QString::fromUtf8("widget_Chart_Coordinate"));
        widget_Chart_Coordinate->setStyleSheet(QString::fromUtf8("background-color:#434e59;"));
        horizontalLayout_28 = new QHBoxLayout(widget_Chart_Coordinate);
        horizontalLayout_28->setSpacing(0);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(508, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_3);

        widget_12 = new QWidget(widget_Chart_Coordinate);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        widget_12->setFont(font);
        verticalLayout_6 = new QVBoxLayout(widget_12);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkBox_X = new QCheckBox(widget_12);
        checkBox_X->setObjectName(QString::fromUtf8("checkBox_X"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        checkBox_X->setFont(font1);
        checkBox_X->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_X->setChecked(true);

        verticalLayout_6->addWidget(checkBox_X);

        checkBox_Y = new QCheckBox(widget_12);
        checkBox_Y->setObjectName(QString::fromUtf8("checkBox_Y"));
        checkBox_Y->setFont(font1);
        checkBox_Y->setTabletTracking(false);
        checkBox_Y->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Y->setChecked(true);
        checkBox_Y->setTristate(false);

        verticalLayout_6->addWidget(checkBox_Y);

        checkBox_Z = new QCheckBox(widget_12);
        checkBox_Z->setObjectName(QString::fromUtf8("checkBox_Z"));
        checkBox_Z->setFont(font1);
        checkBox_Z->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_Z->setChecked(true);

        verticalLayout_6->addWidget(checkBox_Z);


        horizontalLayout_28->addWidget(widget_12);


        verticalLayout_5->addWidget(widget_Chart_Coordinate);

        widget_29 = new QWidget(widget_5);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        widget_29->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_29 = new QHBoxLayout(widget_29);
        horizontalLayout_29->setSpacing(24);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        widget_13 = new QWidget(widget_29);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_7 = new QHBoxLayout(widget_13);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(widget_13);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_7->addWidget(label_2);

        lcdNumber_X = new QLCDNumber(widget_13);
        lcdNumber_X->setObjectName(QString::fromUtf8("lcdNumber_X"));
        QFont font2;
        font2.setPointSize(16);
        lcdNumber_X->setFont(font2);
        lcdNumber_X->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_X->setSmallDecimalPoint(true);
        lcdNumber_X->setDigitCount(10);
        lcdNumber_X->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_X->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_X->setProperty("intValue", QVariant(20));

        horizontalLayout_7->addWidget(lcdNumber_X);

        label_33 = new QLabel(widget_13);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_7->addWidget(label_33);


        horizontalLayout_29->addWidget(widget_13);

        widget_15 = new QWidget(widget_29);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_13 = new QHBoxLayout(widget_15);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_15 = new QLabel(widget_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_13->addWidget(label_15);

        lcdNumber_Y = new QLCDNumber(widget_15);
        lcdNumber_Y->setObjectName(QString::fromUtf8("lcdNumber_Y"));
        lcdNumber_Y->setFont(font2);
        lcdNumber_Y->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_Y->setSmallDecimalPoint(true);
        lcdNumber_Y->setDigitCount(10);
        lcdNumber_Y->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Y->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_Y->setProperty("intValue", QVariant(20));

        horizontalLayout_13->addWidget(lcdNumber_Y);

        label_34 = new QLabel(widget_15);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_13->addWidget(label_34);


        horizontalLayout_29->addWidget(widget_15);

        widget_16 = new QWidget(widget_29);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_14 = new QHBoxLayout(widget_16);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_35 = new QLabel(widget_16);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_14->addWidget(label_35);

        lcdNumber_Z = new QLCDNumber(widget_16);
        lcdNumber_Z->setObjectName(QString::fromUtf8("lcdNumber_Z"));
        lcdNumber_Z->setFont(font2);
        lcdNumber_Z->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_Z->setSmallDecimalPoint(true);
        lcdNumber_Z->setDigitCount(10);
        lcdNumber_Z->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Z->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_Z->setProperty("intValue", QVariant(20));

        horizontalLayout_14->addWidget(lcdNumber_Z);

        label_36 = new QLabel(widget_16);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_14->addWidget(label_36);


        horizontalLayout_29->addWidget(widget_16);


        verticalLayout_5->addWidget(widget_29);

        widget_Chart_Angle = new QChartView(widget_5);
        widget_Chart_Angle->setObjectName(QString::fromUtf8("widget_Chart_Angle"));
        widget_Chart_Angle->setStyleSheet(QString::fromUtf8("background-color:#434e59;"));
        horizontalLayout_8 = new QHBoxLayout(widget_Chart_Angle);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(495, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        widget_4 = new QWidget(widget_Chart_Angle);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setFont(font);
        verticalLayout_7 = new QVBoxLayout(widget_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        checkBox_A = new QCheckBox(widget_4);
        checkBox_A->setObjectName(QString::fromUtf8("checkBox_A"));
        checkBox_A->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_A->setChecked(true);

        verticalLayout_7->addWidget(checkBox_A);

        checkBox_B = new QCheckBox(widget_4);
        checkBox_B->setObjectName(QString::fromUtf8("checkBox_B"));
        checkBox_B->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_B->setChecked(true);

        verticalLayout_7->addWidget(checkBox_B);

        checkBox_C = new QCheckBox(widget_4);
        checkBox_C->setObjectName(QString::fromUtf8("checkBox_C"));
        checkBox_C->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));
        checkBox_C->setChecked(true);

        verticalLayout_7->addWidget(checkBox_C);


        horizontalLayout_8->addWidget(widget_4);


        verticalLayout_5->addWidget(widget_Chart_Angle);

        widget_33 = new QWidget(widget_5);
        widget_33->setObjectName(QString::fromUtf8("widget_33"));
        widget_33->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_30 = new QHBoxLayout(widget_33);
        horizontalLayout_30->setSpacing(24);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        widget_34 = new QWidget(widget_33);
        widget_34->setObjectName(QString::fromUtf8("widget_34"));
        widget_34->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_31 = new QHBoxLayout(widget_34);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_37 = new QLabel(widget_34);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_31->addWidget(label_37);

        lcdNumber_MX = new QLCDNumber(widget_34);
        lcdNumber_MX->setObjectName(QString::fromUtf8("lcdNumber_MX"));
        lcdNumber_MX->setFont(font2);
        lcdNumber_MX->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_MX->setSmallDecimalPoint(true);
        lcdNumber_MX->setDigitCount(9);
        lcdNumber_MX->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_MX->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_MX->setProperty("intValue", QVariant(20));

        horizontalLayout_31->addWidget(lcdNumber_MX);

        label_38 = new QLabel(widget_34);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_31->addWidget(label_38);


        horizontalLayout_30->addWidget(widget_34);

        widget_35 = new QWidget(widget_33);
        widget_35->setObjectName(QString::fromUtf8("widget_35"));
        widget_35->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_32 = new QHBoxLayout(widget_35);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_39 = new QLabel(widget_35);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_32->addWidget(label_39);

        lcdNumber_MY = new QLCDNumber(widget_35);
        lcdNumber_MY->setObjectName(QString::fromUtf8("lcdNumber_MY"));
        lcdNumber_MY->setFont(font2);
        lcdNumber_MY->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_MY->setSmallDecimalPoint(true);
        lcdNumber_MY->setDigitCount(9);
        lcdNumber_MY->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_MY->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_MY->setProperty("intValue", QVariant(20));

        horizontalLayout_32->addWidget(lcdNumber_MY);

        label_40 = new QLabel(widget_35);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_32->addWidget(label_40);


        horizontalLayout_30->addWidget(widget_35);

        widget_36 = new QWidget(widget_33);
        widget_36->setObjectName(QString::fromUtf8("widget_36"));
        widget_36->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        horizontalLayout_33 = new QHBoxLayout(widget_36);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_41 = new QLabel(widget_36);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_33->addWidget(label_41);

        lcdNumber_MZ = new QLCDNumber(widget_36);
        lcdNumber_MZ->setObjectName(QString::fromUtf8("lcdNumber_MZ"));
        lcdNumber_MZ->setFont(font2);
        lcdNumber_MZ->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_MZ->setSmallDecimalPoint(true);
        lcdNumber_MZ->setDigitCount(9);
        lcdNumber_MZ->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_MZ->setProperty("value", QVariant(20.000000000000000));
        lcdNumber_MZ->setProperty("intValue", QVariant(20));

        horizontalLayout_33->addWidget(lcdNumber_MZ);

        label_42 = new QLabel(widget_36);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_33->addWidget(label_42);


        horizontalLayout_30->addWidget(widget_36);


        verticalLayout_5->addWidget(widget_33);

        verticalLayout_5->setStretch(0, 5);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 5);
        verticalLayout_5->setStretch(3, 1);

        horizontalLayout->addWidget(widget_5);

        groupBox_Force_4 = new QGroupBox(ForceGet);
        groupBox_Force_4->setObjectName(QString::fromUtf8("groupBox_Force_4"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox_Force_4->setFont(font3);
        groupBox_Force_4->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"color:white;"));
        verticalLayout_12 = new QVBoxLayout(groupBox_Force_4);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(-1, 30, -1, 12);
        widget_30 = new QWidget(groupBox_Force_4);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_30->sizePolicy().hasHeightForWidth());
        widget_30->setSizePolicy(sizePolicy);
        widget_30->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:#434e59;\n"
"font: \"Times New Roman\" 24px;"));
        verticalLayout_10 = new QVBoxLayout(widget_30);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(9, 9, 9, 9);
        widget_32 = new QWidget(widget_30);
        widget_32->setObjectName(QString::fromUtf8("widget_32"));
        widget_32->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        verticalLayout_13 = new QVBoxLayout(widget_32);
        verticalLayout_13->setSpacing(12);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_31 = new QLabel(widget_32);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_31->setFont(font4);
        label_31->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"border:none;\n"
""));
        label_31->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_31);

        widget_37 = new QWidget(widget_32);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_26 = new QHBoxLayout(widget_37);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        doubleSpinBox_ForceAngel = new QDoubleSpinBox(widget_37);
        doubleSpinBox_ForceAngel->setObjectName(QString::fromUtf8("doubleSpinBox_ForceAngel"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("24px"));
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        doubleSpinBox_ForceAngel->setFont(font5);
        doubleSpinBox_ForceAngel->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:14px; \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        doubleSpinBox_ForceAngel->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_ForceAngel->setDecimals(0);

        horizontalLayout_26->addWidget(doubleSpinBox_ForceAngel);

        label_32 = new QLabel(widget_37);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_26->addWidget(label_32);

        horizontalLayout_26->setStretch(0, 3);
        horizontalLayout_26->setStretch(1, 1);

        verticalLayout_13->addWidget(widget_37);


        verticalLayout_10->addWidget(widget_32);

        widget_39 = new QWidget(widget_30);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        verticalLayout_15 = new QVBoxLayout(widget_39);
        verticalLayout_15->setSpacing(12);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_43 = new QLabel(widget_39);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font4);
        label_43->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"border:none;\n"
""));
        label_43->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_43);

        widget_40 = new QWidget(widget_39);
        widget_40->setObjectName(QString::fromUtf8("widget_40"));
        widget_40->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_34 = new QHBoxLayout(widget_40);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        doubleSpinBox_Angel_Interval = new QDoubleSpinBox(widget_40);
        doubleSpinBox_Angel_Interval->setObjectName(QString::fromUtf8("doubleSpinBox_Angel_Interval"));
        doubleSpinBox_Angel_Interval->setFont(font5);
        doubleSpinBox_Angel_Interval->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:14px; \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        doubleSpinBox_Angel_Interval->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Angel_Interval->setDecimals(0);

        horizontalLayout_34->addWidget(doubleSpinBox_Angel_Interval);

        label_44 = new QLabel(widget_40);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_34->addWidget(label_44);

        horizontalLayout_34->setStretch(0, 3);
        horizontalLayout_34->setStretch(1, 1);

        verticalLayout_15->addWidget(widget_40);


        verticalLayout_10->addWidget(widget_39);

        widget_31 = new QWidget(widget_30);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        widget_31->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        verticalLayout_14 = new QVBoxLayout(widget_31);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_29 = new QLabel(widget_31);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);
        label_29->setFont(font4);
        label_29->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"border:none;"));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_29);

        widget_38 = new QWidget(widget_31);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        sizePolicy1.setHeightForWidth(widget_38->sizePolicy().hasHeightForWidth());
        widget_38->setSizePolicy(sizePolicy1);
        widget_38->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_27 = new QHBoxLayout(widget_38);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        doubleSpinBox_ForceDistance = new QDoubleSpinBox(widget_38);
        doubleSpinBox_ForceDistance->setObjectName(QString::fromUtf8("doubleSpinBox_ForceDistance"));
        doubleSpinBox_ForceDistance->setFont(font5);
        doubleSpinBox_ForceDistance->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:14px; \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        doubleSpinBox_ForceDistance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_ForceDistance->setDecimals(1);

        horizontalLayout_27->addWidget(doubleSpinBox_ForceDistance);

        label_30 = new QLabel(widget_38);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold italic  \"Times New Roman\";\n"
"font-size:16px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_27->addWidget(label_30);

        horizontalLayout_27->setStretch(0, 3);
        horizontalLayout_27->setStretch(1, 1);

        verticalLayout_14->addWidget(widget_38);


        verticalLayout_10->addWidget(widget_31);


        verticalLayout_12->addWidget(widget_30);

        pushButton_Sensor_Monitor = new QPushButton(groupBox_Force_4);
        pushButton_Sensor_Monitor->setObjectName(QString::fromUtf8("pushButton_Sensor_Monitor"));
        sizePolicy1.setHeightForWidth(pushButton_Sensor_Monitor->sizePolicy().hasHeightForWidth());
        pushButton_Sensor_Monitor->setSizePolicy(sizePolicy1);
        pushButton_Sensor_Monitor->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_Sensor_Monitor->setLayoutDirection(Qt::LeftToRight);
        pushButton_Sensor_Monitor->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/monitorOnW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Sensor_Monitor->setIcon(icon);
        pushButton_Sensor_Monitor->setIconSize(QSize(80, 80));
        pushButton_Sensor_Monitor->setAutoRepeat(false);
        pushButton_Sensor_Monitor->setFlat(false);

        verticalLayout_12->addWidget(pushButton_Sensor_Monitor);


        horizontalLayout->addWidget(groupBox_Force_4);


        retranslateUi(ForceGet);

        QMetaObject::connectSlotsByName(ForceGet);
    } // setupUi

    void retranslateUi(QDialog *ForceGet)
    {
        ForceGet->setWindowTitle(QCoreApplication::translate("ForceGet", "Dialog", nullptr));
        checkBox_X->setText(QCoreApplication::translate("ForceGet", "X", nullptr));
        checkBox_Y->setText(QCoreApplication::translate("ForceGet", "Y", nullptr));
        checkBox_Z->setText(QCoreApplication::translate("ForceGet", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("ForceGet", "X:", nullptr));
        label_33->setText(QCoreApplication::translate("ForceGet", "N\357\274\210\302\261200\357\274\211", nullptr));
        label_15->setText(QCoreApplication::translate("ForceGet", "Y:", nullptr));
        label_34->setText(QCoreApplication::translate("ForceGet", "N\357\274\210\302\261200\357\274\211", nullptr));
        label_35->setText(QCoreApplication::translate("ForceGet", "Z:", nullptr));
        label_36->setText(QCoreApplication::translate("ForceGet", "N\357\274\210\302\261400\357\274\211", nullptr));
        checkBox_A->setText(QCoreApplication::translate("ForceGet", "A", nullptr));
        checkBox_B->setText(QCoreApplication::translate("ForceGet", "B", nullptr));
        checkBox_C->setText(QCoreApplication::translate("ForceGet", "C", nullptr));
        label_37->setText(QCoreApplication::translate("ForceGet", "A:", nullptr));
        label_38->setText(QCoreApplication::translate("ForceGet", "N/m\357\274\210\302\26120\357\274\211", nullptr));
        label_39->setText(QCoreApplication::translate("ForceGet", "B:", nullptr));
        label_40->setText(QCoreApplication::translate("ForceGet", "N/m\357\274\210\302\26120\357\274\211", nullptr));
        label_41->setText(QCoreApplication::translate("ForceGet", "C:", nullptr));
        label_42->setText(QCoreApplication::translate("ForceGet", "N/m\357\274\210\302\26120\357\274\211", nullptr));
        groupBox_Force_4->setTitle(QCoreApplication::translate("ForceGet", "\345\221\250\350\276\271\345\212\233\351\207\207\351\233\206\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("ForceGet", "\350\260\203\346\225\264\346\226\271\345\220\221\357\274\232", nullptr));
        label_32->setText(QCoreApplication::translate("ForceGet", "\302\260", nullptr));
        label_43->setText(QCoreApplication::translate("ForceGet", "\350\247\222\345\272\246\351\227\264\351\232\224\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("ForceGet", "\302\260", nullptr));
        label_29->setText(QCoreApplication::translate("ForceGet", "\350\260\203\346\225\264\350\267\235\347\246\273\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("ForceGet", "mm", nullptr));
        pushButton_Sensor_Monitor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ForceGet: public Ui_ForceGet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORCEGET_H
