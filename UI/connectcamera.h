#ifndef CONNECTCAMERA_H
#define CONNECTCAMERA_H

#include <QDialog>
#include <QString>
#include "variables.h"

namespace Ui {
class ConnectCamera;
}

class ConnectCamera : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectCamera(QWidget *parent = nullptr);
    void initBox();
    ~ConnectCamera();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ConnectCamera *ui;
};

#endif // CONNECTCAMERA_H
