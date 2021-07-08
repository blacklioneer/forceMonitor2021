#ifndef QUICKCHANGECONTROL_H
#define QUICKCHANGECONTROL_H

#include <QDialog>

namespace Ui {
class QuickChangeControl;
}

class QuickChangeControl : public QDialog
{
    Q_OBJECT

public:
    explicit QuickChangeControl(QWidget *parent = nullptr,bool *change = nullptr);
    ~QuickChangeControl();

private slots:
    void on_pushButton_Remove_clicked();

private:
    Ui::QuickChangeControl *ui;
    bool *QChange;
};

#endif // QUICKCHANGECONTROL_H
