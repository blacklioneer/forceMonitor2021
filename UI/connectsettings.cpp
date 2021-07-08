#include "connectsettings.h"
#include "ui_connectsettings.h"

ConnectSettings::ConnectSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectSettings)
{
    ui->setupUi(this);
    ui->lineEdit_PLC_Connect_IP->setText(plc_Address.ip);
    ui->lineEdit_PLC_Connect_Port->setText(plc_Address.port);
    ui->lineEdit_Sensor_Connect_IP->setText(sensor_Address.ip);
    ui->lineEdit_Sensor_Connect_Port->setText(sensor_Address.port);
    ui->lineEdit_Camera_Connect_IP->setText(select_camera);
    ui->lineEdit_Robot_Connect_Port->setText(robot_Address.port);
    ui->lineEdit_Robot_Connect_IP->setText(robot_Address.ip);
}

ConnectSettings::~ConnectSettings()
{
    delete ui;
}


void ConnectSettings::on_buttonBox_accepted()
{
    plc_Address.ip = ui->lineEdit_PLC_Connect_IP->text();
    plc_Address.port = ui->lineEdit_PLC_Connect_Port->text();
    sensor_Address.ip = ui->lineEdit_Sensor_Connect_IP->text();
    sensor_Address.port = ui->lineEdit_Sensor_Connect_Port->text();
    select_camera = ui->lineEdit_Camera_Connect_IP->text();
    robot_Address.port = ui->lineEdit_Robot_Connect_Port->text();
    robot_Address.ip = ui->lineEdit_Robot_Connect_IP->text();
    settings = true;
    this->close();
}

void ConnectSettings::on_buttonBox_rejected()
{
    settings =false;
    this->close();
}
