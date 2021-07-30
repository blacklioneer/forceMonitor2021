#include "forceget.h"
#include "ui_forceget.h"

ForceGet::ForceGet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForceGet)
{
    ui->setupUi(this);
}

ForceGet::~ForceGet()
{
    delete ui;
}


void ForceGet::on_StartButton_clicked()
{
    //读取参数并且执行采集程序，同时启动传感器数据采集
    this->close();
}

void ForceGet::on_CancleButton_clicked()
{
    this->close();
}
