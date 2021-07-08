#ifndef CONNECTPLC_H
#define CONNECTPLC_H

#include <QDialog>
#include "variables.h"
namespace Ui {
class ConnectPLC;
}

class ConnectPLC : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectPLC(QWidget *parent = nullptr);
    ~ConnectPLC();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ConnectPLC *ui;
};

#endif // CONNECTPLC_H
