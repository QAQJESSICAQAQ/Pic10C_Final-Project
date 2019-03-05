#include "your_oreo.h"
#include "ui_your_oreo.h"

your_oreo::your_oreo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::your_oreo)
{
    ui->setupUi(this);
}

your_oreo::~your_oreo()
{
    delete ui;
}
