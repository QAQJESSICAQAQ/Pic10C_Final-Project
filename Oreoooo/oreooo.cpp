#include "oreooo.h"
#include "ui_oreooo.h"
#include "your_oreo.h"

oreooo::oreooo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::oreooo)
{
    ui->setupUi(this);
}

oreooo::~oreooo()
{

    delete ui;
}


void oreooo::on_pushButton_5_clicked()
{
    your_oreo youroero;
    youroero.setModal(true);
    youroero.exec();

}
