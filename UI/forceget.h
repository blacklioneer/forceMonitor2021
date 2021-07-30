#ifndef FORCEGET_H
#define FORCEGET_H

#include <QDialog>
#include <QtCharts/QChart>
#include<QtCharts\QChartView>   //两个基本模块
#include<QtCharts\QSplineSeries>   //两个基本模块
#include "sensor.h"
#include "variables.h"

using namespace QtCharts;
namespace Ui {
class ForceGet;
}

class ForceGet : public QDialog
{
    Q_OBJECT

public:
    explicit ForceGet(QWidget *parent = nullptr);
    ~ForceGet();

private slots:


    void on_StartButton_clicked();

    void on_CancleButton_clicked();

private:
    bool monitor_Status = false;
    Ui::ForceGet *ui;
};

#endif // FORCEGET_H
