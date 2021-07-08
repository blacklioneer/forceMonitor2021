/********************************************************************************
** Form generated from reading UI file 'connectsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTSETTINGS_H
#define UI_CONNECTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_PLC_Connect_IP;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_PLC_Connect_Port;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_Sensor_Connect_IP;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_Sensor_Connect_Port;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLineEdit *lineEdit_Robot_Connect_IP;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLineEdit *lineEdit_Robot_Connect_Port;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QLineEdit *lineEdit_Camera_Connect_IP;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConnectSettings)
    {
        if (ConnectSettings->objectName().isEmpty())
            ConnectSettings->setObjectName(QString::fromUtf8("ConnectSettings"));
        ConnectSettings->resize(449, 402);
        verticalLayout = new QVBoxLayout(ConnectSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ConnectSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_PLC_Connect_IP = new QLineEdit(widget);
        lineEdit_PLC_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_PLC_Connect_IP"));

        horizontalLayout->addWidget(lineEdit_PLC_Connect_IP);


        horizontalLayout_3->addWidget(widget);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_PLC_Connect_Port = new QLineEdit(widget_2);
        lineEdit_PLC_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_PLC_Connect_Port"));

        horizontalLayout_2->addWidget(lineEdit_PLC_Connect_Port);


        horizontalLayout_3->addWidget(widget_2);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ConnectSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_3 = new QWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_Sensor_Connect_IP = new QLineEdit(widget_3);
        lineEdit_Sensor_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Sensor_Connect_IP"));

        horizontalLayout_5->addWidget(lineEdit_Sensor_Connect_IP);


        horizontalLayout_4->addWidget(widget_3);

        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_Sensor_Connect_Port = new QLineEdit(widget_4);
        lineEdit_Sensor_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_Sensor_Connect_Port"));

        horizontalLayout_6->addWidget(lineEdit_Sensor_Connect_Port);


        horizontalLayout_4->addWidget(widget_4);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(ConnectSettings);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        widget_7 = new QWidget(groupBox_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_11 = new QHBoxLayout(widget_7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_11->addWidget(label_7);

        lineEdit_Robot_Connect_IP = new QLineEdit(widget_7);
        lineEdit_Robot_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Robot_Connect_IP"));

        horizontalLayout_11->addWidget(lineEdit_Robot_Connect_IP);


        horizontalLayout_10->addWidget(widget_7);

        widget_8 = new QWidget(groupBox_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_12 = new QHBoxLayout(widget_8);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        lineEdit_Robot_Connect_Port = new QLineEdit(widget_8);
        lineEdit_Robot_Connect_Port->setObjectName(QString::fromUtf8("lineEdit_Robot_Connect_Port"));

        horizontalLayout_12->addWidget(lineEdit_Robot_Connect_Port);


        horizontalLayout_10->addWidget(widget_8);

        horizontalLayout_10->setStretch(0, 3);
        horizontalLayout_10->setStretch(1, 1);

        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(ConnectSettings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        widget_5 = new QWidget(groupBox_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_8 = new QHBoxLayout(widget_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        lineEdit_Camera_Connect_IP = new QLineEdit(widget_5);
        lineEdit_Camera_Connect_IP->setObjectName(QString::fromUtf8("lineEdit_Camera_Connect_IP"));

        horizontalLayout_8->addWidget(lineEdit_Camera_Connect_IP);


        horizontalLayout_7->addWidget(widget_5);

        horizontalLayout_7->setStretch(0, 3);

        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(ConnectSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConnectSettings);

        QMetaObject::connectSlotsByName(ConnectSettings);
    } // setupUi

    void retranslateUi(QDialog *ConnectSettings)
    {
        ConnectSettings->setWindowTitle(QCoreApplication::translate("ConnectSettings", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConnectSettings", "PLC", nullptr));
        label->setText(QCoreApplication::translate("ConnectSettings", "IP", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectSettings", "\347\253\257\345\217\243\345\217\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConnectSettings", "\344\274\240\346\204\237\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("ConnectSettings", "IP", nullptr));
        label_4->setText(QCoreApplication::translate("ConnectSettings", "\347\253\257\345\217\243\345\217\267", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConnectSettings", "\346\234\272\345\231\250\344\272\272", nullptr));
        label_7->setText(QCoreApplication::translate("ConnectSettings", "IP", nullptr));
        label_8->setText(QCoreApplication::translate("ConnectSettings", "\347\253\257\345\217\243\345\217\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ConnectSettings", "\347\233\270\346\234\272", nullptr));
        label_5->setText(QCoreApplication::translate("ConnectSettings", "\345\272\217\345\210\227\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectSettings: public Ui_ConnectSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTSETTINGS_H
