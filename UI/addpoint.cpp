#include "addpoint.h"
#include "ui_addpoint.h"

AddPoint::AddPoint(QWidget *parent,int i) :
    QDialog(parent),
    ui(new Ui::AddPoint)
{
    ui->setupUi(this);
    ui->num->setValue(i);
    add = true;
}

AddPoint::AddPoint(QWidget *parent,PointCoordinate m) :
    QDialog(parent),
    ui(new Ui::AddPoint)
{
    ui->setupUi(this);
    ui->num->setValue(m.num);
    ui->X->setValue(m.angle_x);
    ui->Y->setValue(m.angle_y);
    ui->Z->setValue(m.angle_z);
    add = false;
}

AddPoint::~AddPoint()
{
    delete ui;
}

void AddPoint::on_Yes_clicked()
{
    PointCoordinate a ={ui->num->value(),ui->X->value(),ui->Y->value(),ui->Z->value()};
    emit(pointData(add,a));
    this->close();
}

void AddPoint::on_Cancel_clicked()
{
    this->close();
}
