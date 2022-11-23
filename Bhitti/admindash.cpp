#include "admindash.h"
#include "ui_admindash.h"
#include<QDebug>
#include "serverdriver.h"

AdminDash::AdminDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDash)
{
    ServerDriver s = ServerDriver();
    ui->setupUi(this);
}

AdminDash::~AdminDash()
{
    delete ui;
}
