/********************************************************************************
** Form generated from reading UI file 'addpoint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOINT_H
#define UI_ADDPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPoint
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Yes;
    QPushButton *Cancel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *num;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *X;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *Y;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *Z;

    void setupUi(QDialog *AddPoint)
    {
        if (AddPoint->objectName().isEmpty())
            AddPoint->setObjectName(QString::fromUtf8("AddPoint"));
        AddPoint->resize(339, 281);
        horizontalLayoutWidget = new QWidget(AddPoint);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 230, 160, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Yes = new QPushButton(horizontalLayoutWidget);
        Yes->setObjectName(QString::fromUtf8("Yes"));

        horizontalLayout->addWidget(Yes);

        Cancel = new QPushButton(horizontalLayoutWidget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        horizontalLayout->addWidget(Cancel);

        verticalLayoutWidget = new QWidget(AddPoint);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 281, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        num = new QSpinBox(verticalLayoutWidget);
        num->setObjectName(QString::fromUtf8("num"));
        num->setEnabled(false);
        QFont font1;
        font1.setPointSize(16);
        num->setFont(font1);
        num->setMaximum(100);

        horizontalLayout_2->addWidget(num);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        X = new QDoubleSpinBox(verticalLayoutWidget);
        X->setObjectName(QString::fromUtf8("X"));
        X->setFont(font1);
        X->setDecimals(3);
        X->setMaximum(999.990000000000009);

        horizontalLayout_3->addWidget(X);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        Y = new QDoubleSpinBox(verticalLayoutWidget);
        Y->setObjectName(QString::fromUtf8("Y"));
        Y->setFont(font1);
        Y->setDecimals(3);
        Y->setMaximum(999.990000000000009);

        horizontalLayout_4->addWidget(Y);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_5->addWidget(label_4);

        Z = new QDoubleSpinBox(verticalLayoutWidget);
        Z->setObjectName(QString::fromUtf8("Z"));
        Z->setFont(font1);
        Z->setDecimals(3);
        Z->setMaximum(999.990000000000009);

        horizontalLayout_5->addWidget(Z);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AddPoint);

        QMetaObject::connectSlotsByName(AddPoint);
    } // setupUi

    void retranslateUi(QDialog *AddPoint)
    {
        AddPoint->setWindowTitle(QCoreApplication::translate("AddPoint", "\345\235\220\346\240\207\347\202\271\346\267\273\345\212\240", nullptr));
        Yes->setText(QCoreApplication::translate("AddPoint", "\347\241\256\345\256\232", nullptr));
        Cancel->setText(QCoreApplication::translate("AddPoint", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("AddPoint", "\345\272\217\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddPoint", "X\350\275\264\345\235\220\346\240\207\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddPoint", "Y\350\275\264\345\235\220\346\240\207\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddPoint", "Z\350\275\264\345\235\220\346\240\207\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPoint: public Ui_AddPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOINT_H
