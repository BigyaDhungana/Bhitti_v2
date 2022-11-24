#include "incpass.h"
#include "ui_incpass.h"

incpass::incpass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::incpass)
{
    ui->setupUi(this);
}

incpass::~incpass()
{
    delete ui;
}
