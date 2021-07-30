/********************************************************************************
** Form generated from reading UI file 'camerasetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTING_H
#define UI_CAMERASETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CameraSetting
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QCheckBox *checkBox_AutoExposure;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_ExposureTime;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_Yes;
    QPushButton *pushButton_No;

    void setupUi(QDialog *CameraSetting)
    {
        if (CameraSetting->objectName().isEmpty())
            CameraSetting->setObjectName(QString::fromUtf8("CameraSetting"));
        CameraSetting->resize(369, 148);
        verticalLayout_2 = new QVBoxLayout(CameraSetting);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(CameraSetting);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_10->addWidget(label_7);

        checkBox_AutoExposure = new QCheckBox(groupBox);
        checkBox_AutoExposure->setObjectName(QString::fromUtf8("checkBox_AutoExposure"));

        horizontalLayout_10->addWidget(checkBox_AutoExposure);


        horizontalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox_ExposureTime = new QDoubleSpinBox(groupBox);
        doubleSpinBox_ExposureTime->setObjectName(QString::fromUtf8("doubleSpinBox_ExposureTime"));
        doubleSpinBox_ExposureTime->setMinimum(59.000000000000000);
        doubleSpinBox_ExposureTime->setMaximum(999974.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_ExposureTime);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_Yes = new QPushButton(CameraSetting);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));

        horizontalLayout_11->addWidget(pushButton_Yes);

        pushButton_No = new QPushButton(CameraSetting);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));

        horizontalLayout_11->addWidget(pushButton_No);


        verticalLayout_2->addLayout(horizontalLayout_11);


        retranslateUi(CameraSetting);

        QMetaObject::connectSlotsByName(CameraSetting);
    } // setupUi

    void retranslateUi(QDialog *CameraSetting)
    {
        CameraSetting->setWindowTitle(QCoreApplication::translate("CameraSetting", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CameraSetting", "\346\233\235\345\205\211", nullptr));
        label_7->setText(QCoreApplication::translate("CameraSetting", "\350\207\252\345\212\250\346\233\235\345\205\211\357\274\232", nullptr));
        checkBox_AutoExposure->setText(QString());
        label->setText(QCoreApplication::translate("CameraSetting", "\346\233\235\345\205\211\346\227\266\351\227\264(\316\274s)\357\274\232", nullptr));
        pushButton_Yes->setText(QCoreApplication::translate("CameraSetting", "\347\241\256\345\256\232", nullptr));
        pushButton_No->setText(QCoreApplication::translate("CameraSetting", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraSetting: public Ui_CameraSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTING_H
