#include "losscaculation.h"
#include "ui_losscaculation.h"

LossCaculation::LossCaculation(QWidget *parent,double x,double y, double z) :
    QDialog(parent),
    ui(new Ui::LossCaculation),
    X(x),Y(y),Z(z)
{
    ui->setupUi(this);
    ui->doubleSpinBox_Position_X->setValue(X);
    ui->doubleSpinBox_Position_Y->setValue(Y);
    ui->doubleSpinBox_Position_Z->setValue(Z);
}

LossCaculation::~LossCaculation()
{
    delete ui;
}

void LossCaculation::on_pushButton_clicked()
{
    this->close();

}
