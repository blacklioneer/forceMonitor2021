#include "connectcamera.h"
#include "ui_connectcamera.h"

ConnectCamera::ConnectCamera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectCamera)
{
    ui->setupUi(this);
    initBox();

}

ConnectCamera::~ConnectCamera()
{
    delete ui;
}



void ConnectCamera::initBox()
{
    int count = m_camera.count();
       for(int i = 0; i < count; i++) {
           ui->comboBox_CameraSelect->addItem(m_camera.at(i));

       }

}

void ConnectCamera::on_buttonBox_accepted()
{
    select_camera = ui->comboBox_CameraSelect->currentText();
}
