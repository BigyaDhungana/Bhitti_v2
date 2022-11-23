#include "admindash.h"
#include "ui_admindash.h"
#include<QDebug>
#include "serverdriver.h"

AdminDash::AdminDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDash)
{
    ServerDriver s = ServerDriver();
    std::string lauda = s.checkServerHealth();
    QString str = QString::fromUtf8(lauda.c_str());
    qDebug() << str;
    ui->setupUi(this);
}

AdminDash::~AdminDash()
{
    delete ui;
}
