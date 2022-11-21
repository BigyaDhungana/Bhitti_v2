#include "login.h"
#include "./ui_login.h"
#include <qstring.h>
#include <QDebug>
#include <iostream>
#include "employeedash.h"
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}



void Login::on_pushButton_clicked()
{
    // taking username and password
    QString username,password;
    username=ui->Uname->text();
    password=ui->Passwrd->text();

    //**********if condition required***************8
    this->hide();
    qDebug()<<username<<password;
    EmployeeDash *e1=new EmployeeDash;
    e1->showMaximized();


}

