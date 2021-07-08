#ifndef CONNECTSETTINGS_H
#define CONNECTSETTINGS_H

#include <QDialog>
#include "variables.h"
#include <QMessageBox>
namespace Ui {
class ConnectSettings;
}

class ConnectSettings : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectSettings(QWidget *parent = nullptr);
    ~ConnectSettings();

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ConnectSettings *ui;
};

#endif // CONNECTSETTINGS_H
