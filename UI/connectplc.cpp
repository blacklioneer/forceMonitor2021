#include "connectplc.h"
#include "ui_connectplc.h"
#include <QDebug>

ConnectPLC::ConnectPLC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectPLC)
{
    ui->setupUi(this);
    ui->lineEdit_PLC_Connect_IP->setText(plc_Address.ip);
    ui->lineEdit_PLC_Connect_Port->setText(plc_Address.port);
}

ConnectPLC::~ConnectPLC()
{
    delete ui;
}

void ConnectPLC::on_buttonBox_accepted()
{
    plc_Address.ip = ui->lineEdit_PLC_Connect_IP->text();
    plc_Address.port = ui->lineEdit_PLC_Connect_Port->text();
//    qDebug() << plc_Address.ip;
//    qDebug() << plc_Address.port;
//    以下为连接执行程序
}
