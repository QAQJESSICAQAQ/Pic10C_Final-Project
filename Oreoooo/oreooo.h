#ifndef OREOOO_H
#define OREOOO_H

#include <QMainWindow>
#include "your_oreo.h"
namespace Ui {
class oreooo;
}

class oreooo : public QMainWindow
{
    Q_OBJECT

public:
    explicit oreooo(QWidget *parent = nullptr);
    ~oreooo();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::oreooo *ui;
};

#endif // OREOOO_H
