/********************************************************************************
** Form generated from reading UI file 'quickchangecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKCHANGECONTROL_H
#define UI_QUICKCHANGECONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickChangeControl
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget_13;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_9;
    QPushButton *pushButton_Remove;

    void setupUi(QDialog *QuickChangeControl)
    {
        if (QuickChangeControl->objectName().isEmpty())
            QuickChangeControl->setObjectName(QString::fromUtf8("QuickChangeControl"));
        QuickChangeControl->resize(518, 200);
        QuickChangeControl->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white"));
        horizontalLayout = new QHBoxLayout(QuickChangeControl);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(QuickChangeControl);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"background-color:#434e59;\n"
"font-size:16px; "));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"background-color:#434e59;\n"
"font-size:16px; "));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget_13 = new QWidget(widget);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        QFont font;
        font.setPointSize(14);
        widget_13->setFont(font);
        widget_13->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;"));
        gridLayout = new QGridLayout(widget_13);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(widget_13);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font1.setPointSize(14);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none;"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_9 = new QLabel(widget_13);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font-family:Microsoft Yahei;\n"
"padding:6px;\n"
"border:none\n"
""));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        pushButton_Remove = new QPushButton(widget_13);
        pushButton_Remove->setObjectName(QString::fromUtf8("pushButton_Remove"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Remove->sizePolicy().hasHeightForWidth());
        pushButton_Remove->setSizePolicy(sizePolicy1);
        pushButton_Remove->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	margin-top:6px;\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/switchOff.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Remove->setIcon(icon);
        pushButton_Remove->setIconSize(QSize(60, 30));
        pushButton_Remove->setFlat(true);

        gridLayout->addWidget(pushButton_Remove, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_13);


        horizontalLayout->addWidget(widget);


        retranslateUi(QuickChangeControl);

        QMetaObject::connectSlotsByName(QuickChangeControl);
    } // setupUi

    void retranslateUi(QDialog *QuickChangeControl)
    {
        QuickChangeControl->setWindowTitle(QCoreApplication::translate("QuickChangeControl", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("QuickChangeControl", "\346\213\206\345\277\253\346\215\242\344\275\277\347\224\250\346\255\243\345\216\213\357\274\214\350\243\205\345\277\253\346\215\242\344\275\277\347\224\250\350\264\237\345\216\213", nullptr));
        label->setText(QCoreApplication::translate("QuickChangeControl", "\346\213\206\345\277\253\346\215\242\344\271\213\345\211\215\350\257\267\347\241\256\344\277\235\345\267\262\346\211\266\344\275\217\345\267\245\350\243\205", nullptr));
        label_6->setText(QCoreApplication::translate("QuickChangeControl", "\346\213\206\345\277\253\346\215\242\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("QuickChangeControl", "\350\243\205\345\277\253\346\215\242\357\274\232", nullptr));
        pushButton_Remove->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuickChangeControl: public Ui_QuickChangeControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKCHANGECONTROL_H
