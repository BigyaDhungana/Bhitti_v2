#include "admindash.h"
#include "ui_admindash.h"

AdminDash::AdminDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDash)
{
    ui->setupUi(this);
}

AdminDash::~AdminDash()
{
    delete ui;
}
