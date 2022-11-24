#include "login.h"
#include "./ui_login.h"
#include <qstring.h>
#include <QDebug>
#include <iostream>
#include "admindash.h"
#include "employeedash.h"
#include "serverdriver.h"
#include "incpass.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>
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
    ServerDriver s = ServerDriver();
    // taking username and password
    QString username,password;
    username=ui->Uname->text();
    password=ui->Passwrd->text();

    std::string uname,pass, response;
    uname=username.toStdString();
    pass=password.toStdString();

    response = s.login(uname, pass);
    // Converting std::string to QString
    QString responseStr = QString::fromUtf8(response.c_str());
    QByteArray jsonData = responseStr.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonObject object = jsonDocument.object();

    QJsonValue isValidUserJson = object.value("isValidUser");
    bool isValidUser = isValidUserJson.toBool();

    if(isValidUser){
        QJsonValue userRoleJson = object.value("role");
        QString userRole = userRoleJson.toString();
        if(userRole == "admin"){
            AdminDash *a1 = new AdminDash;
            a1->showMaximized();
        }else{
            EmployeeDash *e1=new EmployeeDash;
            e1->showMaximized();
            this->hide();
        }
    }else{
       // std::string test =s.addOrder("321","kaccha kumar","986627282","timro mutu ma","838");
       // QString qtest=QString::fromUtf8(test.c_str());
        //qDebug()<<qtest;
        incpass *i=new incpass;
        i->show();


    }



}

