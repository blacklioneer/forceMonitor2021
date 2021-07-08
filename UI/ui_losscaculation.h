/********************************************************************************
** Form generated from reading UI file 'losscaculation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSSCACULATION_H
#define UI_LOSSCACULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LossCaculation
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_25;
    QWidget *widget_30;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_43;
    QDoubleSpinBox *doubleSpinBox_Position_Y;
    QLabel *label_46;
    QWidget *widget_29;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_41;
    QDoubleSpinBox *doubleSpinBox_Position_X;
    QLabel *label_44;
    QWidget *widget_31;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_47;
    QDoubleSpinBox *doubleSpinBox_Position_Z;
    QLabel *label_49;
    QPushButton *pushButton;
    QLabel *label_45;

    void setupUi(QDialog *LossCaculation)
    {
        if (LossCaculation->objectName().isEmpty())
            LossCaculation->setObjectName(QString::fromUtf8("LossCaculation"));
        LossCaculation->resize(343, 244);
        layoutWidget = new QWidget(LossCaculation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 296, 143));
        verticalLayout_25 = new QVBoxLayout(layoutWidget);
        verticalLayout_25->setSpacing(12);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(12, 0, 12, 0);
        widget_30 = new QWidget(layoutWidget);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        horizontalLayout_27 = new QHBoxLayout(widget_30);
        horizontalLayout_27->setSpacing(12);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(6, 6, 6, 6);
        label_43 = new QLabel(widget_30);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;"));

        horizontalLayout_27->addWidget(label_43);

        doubleSpinBox_Position_Y = new QDoubleSpinBox(widget_30);
        doubleSpinBox_Position_Y->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Y"));
        doubleSpinBox_Position_Y->setEnabled(false);
        QFont font;
        font.setFamily(QString::fromUtf8("24px"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        doubleSpinBox_Position_Y->setFont(font);
        doubleSpinBox_Position_Y->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Y->setAcceptDrops(false);
        doubleSpinBox_Position_Y->setAutoFillBackground(false);
        doubleSpinBox_Position_Y->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; \n"
"\n"
""));
        doubleSpinBox_Position_Y->setFrame(true);
        doubleSpinBox_Position_Y->setReadOnly(true);
        doubleSpinBox_Position_Y->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Y->setDecimals(6);
        doubleSpinBox_Position_Y->setMaximum(999.990000000000009);
        doubleSpinBox_Position_Y->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_27->addWidget(doubleSpinBox_Position_Y);

        label_46 = new QLabel(widget_30);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";\n"
"font-size:24px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_27->addWidget(label_46);


        verticalLayout_25->addWidget(widget_30);

        widget_29 = new QWidget(layoutWidget);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        horizontalLayout_26 = new QHBoxLayout(widget_29);
        horizontalLayout_26->setSpacing(12);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(6, 6, 6, 6);
        label_41 = new QLabel(widget_29);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;"));

        horizontalLayout_26->addWidget(label_41);

        doubleSpinBox_Position_X = new QDoubleSpinBox(widget_29);
        doubleSpinBox_Position_X->setObjectName(QString::fromUtf8("doubleSpinBox_Position_X"));
        doubleSpinBox_Position_X->setEnabled(false);
        doubleSpinBox_Position_X->setFont(font);
        doubleSpinBox_Position_X->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_X->setAcceptDrops(false);
        doubleSpinBox_Position_X->setAutoFillBackground(false);
        doubleSpinBox_Position_X->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; \n"
"\n"
""));
        doubleSpinBox_Position_X->setFrame(true);
        doubleSpinBox_Position_X->setReadOnly(true);
        doubleSpinBox_Position_X->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_X->setDecimals(6);
        doubleSpinBox_Position_X->setMaximum(999.990000000000009);
        doubleSpinBox_Position_X->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_26->addWidget(doubleSpinBox_Position_X);

        label_44 = new QLabel(widget_29);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_44->setFont(font1);
        label_44->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";\n"
"font-size:24px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_26->addWidget(label_44);


        verticalLayout_25->addWidget(widget_29);

        widget_31 = new QWidget(layoutWidget);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        horizontalLayout_28 = new QHBoxLayout(widget_31);
        horizontalLayout_28->setSpacing(12);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(6, 6, 6, 6);
        label_47 = new QLabel(widget_31);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_47->setFont(font2);
        label_47->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;"));

        horizontalLayout_28->addWidget(label_47);

        doubleSpinBox_Position_Z = new QDoubleSpinBox(widget_31);
        doubleSpinBox_Position_Z->setObjectName(QString::fromUtf8("doubleSpinBox_Position_Z"));
        doubleSpinBox_Position_Z->setEnabled(false);
        doubleSpinBox_Position_Z->setFont(font);
        doubleSpinBox_Position_Z->setContextMenuPolicy(Qt::DefaultContextMenu);
        doubleSpinBox_Position_Z->setAcceptDrops(false);
        doubleSpinBox_Position_Z->setAutoFillBackground(false);
        doubleSpinBox_Position_Z->setStyleSheet(QString::fromUtf8("font:  \"Times New Roman\";\n"
"font-size:20px; \n"
""));
        doubleSpinBox_Position_Z->setFrame(true);
        doubleSpinBox_Position_Z->setReadOnly(true);
        doubleSpinBox_Position_Z->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_Position_Z->setDecimals(6);
        doubleSpinBox_Position_Z->setMaximum(360.000000000000000);
        doubleSpinBox_Position_Z->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_28->addWidget(doubleSpinBox_Position_Z);

        label_49 = new QLabel(widget_31);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setStyleSheet(QString::fromUtf8("border:none;\n"
"font:bold  \"Times New Roman\";\n"
"font-size:24px; \n"
"border-width:0px;\n"
""));

        horizontalLayout_28->addWidget(label_49);


        verticalLayout_25->addWidget(widget_31);

        pushButton = new QPushButton(LossCaculation);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 190, 91, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(16);
        pushButton->setFont(font3);
        label_45 = new QLabel(LossCaculation);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(20, 0, 311, 27));
        label_45->setStyleSheet(QString::fromUtf8("font:bold  \"Times New Roman\";    \n"
"font-family:Microsoft Yahei;\n"
"font-size:20px; \n"
"border-width:0px;"));

        retranslateUi(LossCaculation);

        QMetaObject::connectSlotsByName(LossCaculation);
    } // setupUi

    void retranslateUi(QDialog *LossCaculation)
    {
        LossCaculation->setWindowTitle(QCoreApplication::translate("LossCaculation", "Dialog", nullptr));
        label_43->setText(QCoreApplication::translate("LossCaculation", "X\345\220\221\350\257\257\345\267\256\357\274\232", nullptr));
        label_46->setText(QCoreApplication::translate("LossCaculation", "mm", nullptr));
        label_41->setText(QCoreApplication::translate("LossCaculation", "Y\345\220\221\350\257\257\345\267\256\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("LossCaculation", "mm", nullptr));
        label_47->setText(QCoreApplication::translate("LossCaculation", "A\345\220\221\350\257\257\345\267\256\357\274\232", nullptr));
        label_49->setText(QCoreApplication::translate("LossCaculation", "\302\260", nullptr));
        pushButton->setText(QCoreApplication::translate("LossCaculation", "\347\241\256\345\256\232", nullptr));
        label_45->setText(QCoreApplication::translate("LossCaculation", "\350\256\241\347\256\227\345\256\214\346\257\225\357\274\201\345\275\223\345\211\215\350\256\241\347\256\227\350\257\257\345\267\256\347\273\223\346\236\234\345\246\202\344\270\213\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LossCaculation: public Ui_LossCaculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSSCACULATION_H
