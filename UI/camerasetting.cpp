#include "camerasetting.h"
#include "ui_camerasetting.h"

CameraSetting::CameraSetting(QWidget *parent, MvCameras* cameras) :
    QDialog(parent),
    ui(new Ui::CameraSetting),
    camera(cameras)
{
    ui->setupUi(this);
    ui->doubleSpinBox_ExposureTime->setValue(static_cast<double>(camera->getExposureTime()));
}

CameraSetting::~CameraSetting()
{
    camera = nullptr;
    delete ui;
}

void CameraSetting::on_pushButton_Yes_clicked()
{
    camera->setExposureAuto(ui->checkBox_AutoExposure->isChecked());
    camera->setExposureTime(ui->doubleSpinBox_ExposureTime->value());
//    camera->setHeight(ui->spinBox_Height->value());
//    camera->setWidth(ui->spinBox_Width->value());
//    camera->setHeartBeatTime(ui->spinBox_HeartBeatTime->value());
//    camera->setOffsetX(ui->spinBox_OffsetX->value());
//    camera->setOffsetY(ui->spinBox_OffsetY->value());
    this->close();

}
