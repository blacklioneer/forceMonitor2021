#ifndef CAMERASETTING_H
#define CAMERASETTING_H


#include <QDialog>
#include "hikvisonsdk.h"
namespace Ui {
class CameraSetting;
}

class CameraSetting : public QDialog
{
    Q_OBJECT

public:
    explicit CameraSetting(QWidget *parent = nullptr,MvCameras* cameras = nullptr);
    ~CameraSetting();

private slots:
    void on_pushButton_Yes_clicked();

private:
    Ui::CameraSetting *ui;
    MvCameras* camera = nullptr;
};

#endif // CAMERASETTING_H
