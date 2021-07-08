#include "quickchangecontrol.h"
#include "ui_quickchangecontrol.h"

QuickChangeControl::QuickChangeControl(QWidget *parent ,bool *change) :
    QDialog(parent),
    ui(new Ui::QuickChangeControl),
    QChange(change)
{
    ui->setupUi(this);
    //执行装快换程序
    if(*QChange){
        QIcon monitor_Start(":/icons/icons/switchOn.svg");
        ui->pushButton_Remove->setIcon(monitor_Start);
        ui->pushButton_Remove->setIconSize(QSize(120, 30));
    }
    //执行拆快换程序
    else{
        QIcon monitor_Start(":/icons/icons/switchOff.svg");
        ui->pushButton_Remove->setIcon(monitor_Start);
        ui->pushButton_Remove->setIconSize(QSize(120, 30));
    }
}

QuickChangeControl::~QuickChangeControl()
{
    delete ui;
}

void QuickChangeControl::on_pushButton_Remove_clicked()
{
    (*QChange) = !(*QChange);
    //执行装快换程序
    if(*QChange){
        QIcon monitor_Start(":/icons/icons/switchOn.svg");
        ui->pushButton_Remove->setIcon(monitor_Start);
        ui->pushButton_Remove->setIconSize(QSize(120, 30));
    }
    //执行拆快换程序
    else{
        QIcon monitor_Start(":/icons/icons/switchOff.svg");
        ui->pushButton_Remove->setIcon(monitor_Start);
        ui->pushButton_Remove->setIconSize(QSize(120, 30));
    }
}
