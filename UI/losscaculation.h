#ifndef LOSSCACULATION_H
#define LOSSCACULATION_H

#include <QDialog>

namespace Ui {
class LossCaculation;
}

class LossCaculation : public QDialog
{
    Q_OBJECT

public:
    explicit LossCaculation(QWidget *parent = nullptr,double x = 0,double y = 0, double z = 0);
    ~LossCaculation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LossCaculation *ui;
    double X,Y,Z;
};

#endif // LOSSCACULATION_H
