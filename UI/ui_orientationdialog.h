/********************************************************************************
** Form generated from reading UI file 'orientationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIENTATIONDIALOG_H
#define UI_ORIENTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrientationDialog
{
public:
    QGroupBox *groupBox_2;
    QLabel *picture;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *shot;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *delete_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *filePath;
    QSpacerItem *horizontalSpacer;
    QPushButton *caculate;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CameraShot;
    QPushButton *Zoom_in;
    QPushButton *Zoom_out;
    QGroupBox *groupBox_21;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;

    void setupUi(QDialog *OrientationDialog)
    {
        if (OrientationDialog->objectName().isEmpty())
            OrientationDialog->setObjectName(QString::fromUtf8("OrientationDialog"));
        OrientationDialog->resize(1161, 587);
        OrientationDialog->setStyleSheet(QString::fromUtf8("background-color: #002140;"));
        groupBox_2 = new QGroupBox(OrientationDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 831, 561));
        picture = new QLabel(groupBox_2);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(10, 20, 801, 450));
        picture->setStyleSheet(QString::fromUtf8("background-color:#434e59;\n"
"color:white;"));
        widget_7 = new QWidget(groupBox_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(10, 480, 801, 62));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"color:white;"));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        shot = new QToolButton(widget_7);
        shot->setObjectName(QString::fromUtf8("shot"));
        shot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    font-family:Microsoft Yahei;\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/video_ShotW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        shot->setIcon(icon);
        shot->setIconSize(QSize(40, 40));
        shot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(shot);

        horizontalSpacer_3 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        delete_2 = new QPushButton(widget_7);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon1);
        delete_2->setIconSize(QSize(40, 40));
        delete_2->setFlat(true);

        horizontalLayout_4->addWidget(delete_2);

        horizontalSpacer_4 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        filePath = new QPushButton(widget_7);
        filePath->setObjectName(QString::fromUtf8("filePath"));
        filePath->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/video_BenchW.svg"), QSize(), QIcon::Normal, QIcon::Off);
        filePath->setIcon(icon2);
        filePath->setIconSize(QSize(40, 40));
        filePath->setFlat(true);

        horizontalLayout_4->addWidget(filePath);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        caculate = new QPushButton(widget_7);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/caculate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        caculate->setIcon(icon3);
        caculate->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(caculate);

        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 251, 62));
        widget->setStyleSheet(QString::fromUtf8("background-color:(0,0,0,100);"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CameraShot = new QPushButton(widget);
        CameraShot->setObjectName(QString::fromUtf8("CameraShot"));
        CameraShot->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"border:none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/video_Start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CameraShot->setIcon(icon4);
        CameraShot->setIconSize(QSize(40, 40));
        CameraShot->setFlat(true);

        horizontalLayout->addWidget(CameraShot);

        Zoom_in = new QPushButton(widget);
        Zoom_in->setObjectName(QString::fromUtf8("Zoom_in"));
        Zoom_in->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"border:none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Zoom_in->setIcon(icon5);
        Zoom_in->setIconSize(QSize(40, 40));
        Zoom_in->setFlat(true);

        horizontalLayout->addWidget(Zoom_in);

        Zoom_out = new QPushButton(widget);
        Zoom_out->setObjectName(QString::fromUtf8("Zoom_out"));
        Zoom_out->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"border:none;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/minius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Zoom_out->setIcon(icon6);
        Zoom_out->setIconSize(QSize(40, 40));
        Zoom_out->setFlat(true);

        horizontalLayout->addWidget(Zoom_out);

        groupBox_21 = new QGroupBox(OrientationDialog);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(860, 20, 276, 551));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        groupBox_21->setFont(font);
        groupBox_21->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#314659;\n"
"color:white;"));
        verticalLayout = new QVBoxLayout(groupBox_21);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 30, -1, -1);
        treeView = new QTreeView(groupBox_21);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setStyleSheet(QString::fromUtf8("background-color:#434e59;\n"
"color:white;"));

        verticalLayout->addWidget(treeView);


        retranslateUi(OrientationDialog);

        QMetaObject::connectSlotsByName(OrientationDialog);
    } // setupUi

    void retranslateUi(QDialog *OrientationDialog)
    {
        OrientationDialog->setWindowTitle(QCoreApplication::translate("OrientationDialog", "\346\240\207\345\256\232\350\256\276\347\275\256\347\252\227\345\217\243", nullptr));
        groupBox_2->setTitle(QString());
        picture->setText(QCoreApplication::translate("OrientationDialog", "\346\262\241\346\234\211\344\277\241\345\217\267", nullptr));
        shot->setText(QCoreApplication::translate("OrientationDialog", "\346\213\215\n"
"\347\205\247", nullptr));
        delete_2->setText(QCoreApplication::translate("OrientationDialog", "\345\210\240\n"
"\351\231\244", nullptr));
        filePath->setText(QCoreApplication::translate("OrientationDialog", "\344\277\235\345\255\230\n"
"\350\267\257\345\276\204", nullptr));
        caculate->setText(QString());
        CameraShot->setText(QString());
        Zoom_in->setText(QString());
        Zoom_out->setText(QString());
        groupBox_21->setTitle(QCoreApplication::translate("OrientationDialog", "\345\233\276\347\211\207\346\240\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrientationDialog: public Ui_OrientationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIENTATIONDIALOG_H
