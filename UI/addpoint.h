#ifndef ADDPOINT_H
#define ADDPOINT_H

#include <QDialog>
#include "variables.h"

namespace Ui {
class AddPoint;
}

class AddPoint : public QDialog
{
    Q_OBJECT

public:
    explicit AddPoint(QWidget *parent = nullptr,int i = 1);
    AddPoint(QWidget *parent = nullptr,PointCoordinate m = {100,3.141,3.141,3.141});
    ~AddPoint();

private:
    Ui::AddPoint *ui;
    bool add = false;


private slots:
        void on_Yes_clicked();
        void on_Cancel_clicked();

signals:
        // 发送视频采集信号触发线程
        void pointData(bool i,PointCoordinate b);
};

#endif // ADDPOINT_H
