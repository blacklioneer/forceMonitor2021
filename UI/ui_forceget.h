/********************************************************************************
** Form generated from reading UI file 'forceget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORCEGET_H
#define UI_FORCEGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForceGet
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Force_4;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_30;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_32;
    QHBoxLayout *horizontalLayout;
    QLabel *label_31;
    QWidget *widget_37;
    QHBoxLayout *horizontalLayout_26;
    QDoubleSpinBox *doubleSpinBox_ForceAngel;
    QLabel *label_32;
    QWidget *widget_39;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_43;
    QWidget *widget_40;
    QHBoxLayout *horizontalLayout_34;
    QDoubleSpinBox *doubleSpinBox_Angel_Interval;
    QLabel *label_44;
    QWidget *widget_31;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_29;
    QWidget *widget_38;
    QHBoxLayout *horizontalLayout_27;
    QDoubleSpinBox *doubleSpinBox_ForceDistance;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_52;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_61;
    QDoubleSpinBox *doubleSpinBox_Position_A;
    QLabel *label_62;
    QWidget *widget_53;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_63;
    QDoubleSpinBox *doubleSpinBox_Position_B;
    QLabel *label_64;
    QWidget *widget_54;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_65;
    QDoubleSpinBox *doubleSpinBox_Position_C;
    QLabel *label_66;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_49;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_53;
    QDoubleSpinBox *doubleSpinBox_Position_X;
    QLabel *label_54;
    QWidget *widget_50;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_55;
    QDoubleSpinBox *doubleSpinBox_Position_Y;
    QLabel *label_58;
    QWidget *widget_51;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_59;
    QDoubleSpinBox *doubleSpinBox_Position_Z;
    QLabel *label_60;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *CancleButton;

    void setupUi(QDialog *ForceGet)
    {
        if (ForceGet->objectName().isEmpty())
            ForceGet->setObjectName(QString::fromUtf8("ForceGet"));
        ForceGet->resize(776, 344);
        ForceGet->setStyleSheet(QString::fromUtf8("\n"
"background-color: #002140;"));
        verticalLayout = new QVBoxLayout(ForceGet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_Force_4 = new QGroupBox(ForceGet);
        groupBox_Force_4->setObjectName(QString::fromUtf8("groupBox_Force_4"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        groupBox_Force_4->setFont(font);
        groupBox_Force_4->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"background-color:#434e59;\n"
"color:white;"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_Force_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 12, -1, -1);
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
        horizontalLayout = new QHBoxLayout(widget_32);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_31 = new QLabel(widget_32);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));
        label_31->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_31);

        widget_37 = new QWidget(widget_32);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_26 = new QHBoxLayout(widget_37);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        doubleSpinBox_ForceAngel = new QDoubleSpinBox(widget_37);
        doubleSpinBox_ForceAngel->setObjectName(QString::fromUtf8("doubleSpinBox_ForceAngel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("24px"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        doubleSpinBox_ForceAngel->setFont(font2);
        doubleSpinBox_ForceAngel->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_ForceAngel->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_ForceAngel->setDecimals(0);

        horizontalLayout_26->addWidget(doubleSpinBox_ForceAngel);

        label_32 = new QLabel(widget_37);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_26->addWidget(label_32);

        horizontalLayout_26->setStretch(0, 3);
        horizontalLayout_26->setStretch(1, 1);

        horizontalLayout->addWidget(widget_37);


        verticalLayout_10->addWidget(widget_32);

        widget_39 = new QWidget(widget_30);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_2 = new QHBoxLayout(widget_39);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_43 = new QLabel(widget_39);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font1);
        label_43->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));
        label_43->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_43);

        widget_40 = new QWidget(widget_39);
        widget_40->setObjectName(QString::fromUtf8("widget_40"));
        widget_40->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        horizontalLayout_34 = new QHBoxLayout(widget_40);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        doubleSpinBox_Angel_Interval = new QDoubleSpinBox(widget_40);
        doubleSpinBox_Angel_Interval->setObjectName(QString::fromUtf8("doubleSpinBox_Angel_Interval"));
        doubleSpinBox_Angel_Interval->setFont(font2);
        doubleSpinBox_Angel_Interval->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_Angel_Interval->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Angel_Interval->setDecimals(0);

        horizontalLayout_34->addWidget(doubleSpinBox_Angel_Interval);

        label_44 = new QLabel(widget_40);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_34->addWidget(label_44);

        horizontalLayout_34->setStretch(0, 3);
        horizontalLayout_34->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_40);


        verticalLayout_10->addWidget(widget_39);

        widget_31 = new QWidget(widget_30);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        widget_31->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;"));
        horizontalLayout_3 = new QHBoxLayout(widget_31);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_29 = new QLabel(widget_31);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));
        label_29->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_29);

        widget_38 = new QWidget(widget_31);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        sizePolicy1.setHeightForWidth(widget_38->sizePolicy().hasHeightForWidth());
        widget_38->setSizePolicy(sizePolicy1);
        widget_38->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_27 = new QHBoxLayout(widget_38);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        doubleSpinBox_ForceDistance = new QDoubleSpinBox(widget_38);
        doubleSpinBox_ForceDistance->setObjectName(QString::fromUtf8("doubleSpinBox_ForceDistance"));
        doubleSpinBox_ForceDistance->setFont(font2);
        doubleSpinBox_ForceDistance->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:24px;  \n"
"border-radius:6px;\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:white;\n"
"\n"
""));
        doubleSpinBox_ForceDistance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_ForceDistance->setDecimals(1);

        horizontalLayout_27->addWidget(doubleSpinBox_ForceDistance);

        label_30 = new QLabel(widget_38);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_27->addWidget(label_30);

        horizontalLayout_27->setStretch(0, 3);
        horizontalLayout_27->setStretch(1, 1);

        horizontalLayout_3->addWidget(widget_38);


        verticalLayout_10->addWidget(widget_31);


        horizontalLayout_4->addWidget(widget_30);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(9, 9, 9, 9);
        widget_52 = new QWidget(groupBox_Force_4);
        widget_52->setObjectName(QString::fromUtf8("widget_52"));
        horizontalLayout_63 = new QHBoxLayout(widget_52);
        horizontalLayout_63->setSpacing(6);
        horizontalLayout_63->setObjectName(QString::fromUtf8("horizontalLayout_63"));
        horizontalLayout_63->setContentsMargins(6, 2, 6, 2);
        label_61 = new QLabel(widget_52);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_63->addWidget(label_61, 0, Qt::AlignVCenter);

        doubleSpinBox_Position_A = new QDoubleSpinBox(widget_52);
        doubleSpinBox_Position_A->setObjectName(QString::fromUtf8("doubleSpinBox_Position_A"));
        doubleSpinBox_Position_A->setFont(font2);
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

        horizontalLayout_63->addWidget(doubleSpinBox_Position_A);

        label_62 = new QLabel(widget_52);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_63->addWidget(label_62, 0, Qt::AlignVCenter);


        verticalLayout_16->addWidget(widget_52);

        widget_53 = new QWidget(groupBox_Force_4);
        widget_53->setObjectName(QString::fromUtf8("widget_53"));
        horizontalLayout_64 = new QHBoxLayout(widget_53);
        horizontalLayout_64->setSpacing(6);
        horizontalLayout_64->setObjectName(QString::fromUtf8("horizontalLayout_64"));
        horizontalLayout_64->setContentsMargins(6, 2, 6, 2);
        label_63 = new QLabel(widget_53);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_64->addWidget(label_63);

        doubleSpinBox_Position_B = new QDoubleSpinBox(widget_53);
        doubleSpinBox_Position_B->setObjectName(QString::fromUtf8("doubleSpinBox_Position_B"));
        doubleSpinBox_Position_B->setFont(font2);
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

        horizontalLayout_64->addWidget(doubleSpinBox_Position_B);

        label_64 = new QLabel(widget_53);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_64->addWidget(label_64);


        verticalLayout_16->addWidget(widget_53);

        widget_54 = new QWidget(groupBox_Force_4);
        widget_54->setObjectName(QString::fromUtf8("widget_54"));
        horizontalLayout_65 = new QHBoxLayout(widget_54);
        horizontalLayout_65->setSpacing(6);
        horizontalLayout_65->setObjectName(QString::fromUtf8("horizontalLayout_65"));
        horizontalLayout_65->setContentsMargins(6, 2, 6, 2);
        label_65 = new QLabel(widget_54);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_65->addWidget(label_65);

        doubleSpinBox_Position_C = new QDoubleSpinBox(widget_54);
        doubleSpinBox_Position_C->setObjectName(QString::fromUtf8("doubleSpinBox_Position_C"));
        doubleSpinBox_Position_C->setFont(font2);
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

        horizontalLayout_65->addWidget(doubleSpinBox_Position_C);

        label_66 = new QLabel(widget_54);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_65->addWidget(label_66);


        verticalLayout_16->addWidget(widget_54);


        horizontalLayout_4->addLayout(verticalLayout_16);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(9, 9, 9, 9);
        widget_49 = new QWidget(groupBox_Force_4);
        widget_49->setObjectName(QString::fromUtf8("widget_49"));
        widget_49->setStyleSheet(QString::fromUtf8("font: \"Times New Roman\" 24px;\n"
""));
        horizontalLayout_60 = new QHBoxLayout(widget_49);
        horizontalLayout_60->setSpacing(6);
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        horizontalLayout_60->setContentsMargins(6, 2, 6, 2);
        label_53 = new QLabel(widget_49);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_60->addWidget(label_53, 0, Qt::AlignVCenter);

        doubleSpinBox_Position_X = new QDoubleSpinBox(widget_49);
        doubleSpinBox_Position_X->setObjectName(QString::fromUtf8("doubleSpinBox_Position_X"));
        doubleSpinBox_Position_X->setFont(font2);
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

        horizontalLayout_60->addWidget(doubleSpinBox_Position_X);

        label_54 = new QLabel(widget_49);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_60->addWidget(label_54, 0, Qt::AlignVCenter);


        verticalLayout_13->addWidget(widget_49);

        widget_50 = new QWidget(groupBox_Force_4);
        widget_50->setObjectName(QString::fromUtf8("widget_50"));
        horizontalLayout_61 = new QHBoxLayout(widget_50);
        horizontalLayout_61->setSpacing(6);
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        horizontalLayout_61->setContentsMargins(6, 2, 6, 2);
        label_55 = new QLabel(widget_50);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_61->addWidget(label_55);

        doubleSpinBox_Position_Y = new QDoubleSpinBox(widget_50);
        doubleSpinBox_Position_Y->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Y"));
        doubleSpinBox_Position_Y->setFont(font2);
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

        horizontalLayout_61->addWidget(doubleSpinBox_Position_Y);

        label_58 = new QLabel(widget_50);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_61->addWidget(label_58);


        verticalLayout_13->addWidget(widget_50);

        widget_51 = new QWidget(groupBox_Force_4);
        widget_51->setObjectName(QString::fromUtf8("widget_51"));
        horizontalLayout_62 = new QHBoxLayout(widget_51);
        horizontalLayout_62->setSpacing(6);
        horizontalLayout_62->setObjectName(QString::fromUtf8("horizontalLayout_62"));
        horizontalLayout_62->setContentsMargins(6, 2, 6, 2);
        label_59 = new QLabel(widget_51);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:24px; \n"
"border-width:0px;"));

        horizontalLayout_62->addWidget(label_59);

        doubleSpinBox_Position_Z = new QDoubleSpinBox(widget_51);
        doubleSpinBox_Position_Z->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Z"));
        doubleSpinBox_Position_Z->setFont(font2);
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

        horizontalLayout_62->addWidget(doubleSpinBox_Position_Z);

        label_60 = new QLabel(widget_51);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px;  \n"
"border-width:0px;\n"
""));

        horizontalLayout_62->addWidget(label_60);


        verticalLayout_13->addWidget(widget_51);


        horizontalLayout_4->addLayout(verticalLayout_13);


        verticalLayout->addWidget(groupBox_Force_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        StartButton = new QPushButton(ForceGet);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        sizePolicy1.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font3.setPointSize(24);
        StartButton->setFont(font3);
        StartButton->setContextMenuPolicy(Qt::CustomContextMenu);
        StartButton->setLayoutDirection(Qt::LeftToRight);
        StartButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        StartButton->setIconSize(QSize(80, 80));
        StartButton->setAutoRepeat(false);
        StartButton->setFlat(false);

        horizontalLayout_5->addWidget(StartButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        CancleButton = new QPushButton(ForceGet);
        CancleButton->setObjectName(QString::fromUtf8("CancleButton"));
        sizePolicy1.setHeightForWidth(CancleButton->sizePolicy().hasHeightForWidth());
        CancleButton->setSizePolicy(sizePolicy1);
        CancleButton->setFont(font3);
        CancleButton->setContextMenuPolicy(Qt::CustomContextMenu);
        CancleButton->setLayoutDirection(Qt::LeftToRight);
        CancleButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        CancleButton->setIconSize(QSize(80, 80));
        CancleButton->setAutoRepeat(false);
        CancleButton->setFlat(false);

        horizontalLayout_5->addWidget(CancleButton);

        horizontalLayout_5->setStretch(0, 4);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(ForceGet);

        QMetaObject::connectSlotsByName(ForceGet);
    } // setupUi

    void retranslateUi(QDialog *ForceGet)
    {
        ForceGet->setWindowTitle(QCoreApplication::translate("ForceGet", "Dialog", nullptr));
        groupBox_Force_4->setTitle(QString());
        label_31->setText(QCoreApplication::translate("ForceGet", "\350\260\203\346\225\264\346\226\271\345\220\221\357\274\232", nullptr));
        label_32->setText(QCoreApplication::translate("ForceGet", "deg", nullptr));
        label_43->setText(QCoreApplication::translate("ForceGet", "\350\247\222\345\272\246\351\227\264\351\232\224\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("ForceGet", "deg", nullptr));
        label_29->setText(QCoreApplication::translate("ForceGet", "\350\260\203\346\225\264\350\267\235\347\246\273\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("ForceGet", "mm", nullptr));
        label_61->setText(QCoreApplication::translate("ForceGet", "A\357\274\232", nullptr));
        label_62->setText(QCoreApplication::translate("ForceGet", "deg", nullptr));
        label_63->setText(QCoreApplication::translate("ForceGet", "B\357\274\232", nullptr));
        label_64->setText(QCoreApplication::translate("ForceGet", "deg", nullptr));
        label_65->setText(QCoreApplication::translate("ForceGet", "C\357\274\232", nullptr));
        label_66->setText(QCoreApplication::translate("ForceGet", "deg", nullptr));
        label_53->setText(QCoreApplication::translate("ForceGet", "X\357\274\232", nullptr));
        label_54->setText(QCoreApplication::translate("ForceGet", "mm", nullptr));
        label_55->setText(QCoreApplication::translate("ForceGet", "Y\357\274\232", nullptr));
        label_58->setText(QCoreApplication::translate("ForceGet", "mm", nullptr));
        label_59->setText(QCoreApplication::translate("ForceGet", "Z\357\274\232", nullptr));
        label_60->setText(QCoreApplication::translate("ForceGet", "mm", nullptr));
        StartButton->setText(QCoreApplication::translate("ForceGet", "\347\241\256\345\256\232", nullptr));
        CancleButton->setText(QCoreApplication::translate("ForceGet", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForceGet: public Ui_ForceGet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORCEGET_H
