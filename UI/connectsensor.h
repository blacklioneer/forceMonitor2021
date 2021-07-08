#ifndef CONNECTSENSOR_H
#define CONNECTSENSOR_H

#include <QDialog>
#include "variables.h"

namespace Ui {
class ConnectSensor;
}

class ConnectSensor : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectSensor(QWidget *parent = nullptr);
    ~ConnectSensor();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ConnectSensor *ui;
};

#endif // CONNECTSENSOR_H
