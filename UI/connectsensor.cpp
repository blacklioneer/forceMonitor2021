#include "connectsensor.h"
#include "ui_connectsensor.h"

ConnectSensor::ConnectSensor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectSensor)
{
    ui->setupUi(this);
    ui->lineEdit_Sensor_Connect_IP->setText(sensor_Address.ip);
    ui->lineEdit_Sensor_Connect_Port->setText(sensor_Address.port);
}

ConnectSensor::~ConnectSensor()
{
    delete ui;
}

void ConnectSensor::on_buttonBox_accepted()
{
    sensor_Address.ip = ui->lineEdit_Sensor_Connect_IP->text();
    sensor_Address.port = ui->lineEdit_Sensor_Connect_Port->text();
}
