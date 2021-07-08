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
    explicit ForceGet(QWidget *parent = nullptr, CSensor *sensor = nullptr);
    ~ForceGet();

private slots:
    void ChartsInit();
    void UpdateXYZMxMyMz(int t, double* vXYZMxMyMz, int n);


    void on_checkBox_X_clicked();

    void on_checkBox_Y_clicked();

    void on_checkBox_Z_clicked();

    void on_checkBox_A_clicked();

    void on_checkBox_B_clicked();

    void on_checkBox_C_clicked();
    /** 力传感器是否开启监测
      * 在这里嵌入你的计算功能程序 */
    void on_pushButton_Sensor_Monitor_clicked();

private:
    bool monitor_Status = false;
    Ui::ForceGet *ui;
    // 力传感器
    CSensor *Sensor = nullptr;

    // charts 定义曲线
    QChart* chart_XYZ = nullptr;               //图表对象
    QChart* chart_MXYZ = nullptr;               //图表对象
    QSplineSeries *seriesX = nullptr;     //创建曲线1
    QSplineSeries *seriesY = nullptr;     //创建曲线2
    QSplineSeries *seriesZ = nullptr;     //创建曲线3
    QSplineSeries *seriesMx = nullptr;     //创建曲线4
    QSplineSeries *seriesMy = nullptr;     //创建曲线5
    QSplineSeries *seriesMz = nullptr;
    //创建曲线6
};

#endif // FORCEGET_H
