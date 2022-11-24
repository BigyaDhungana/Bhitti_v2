#include "addemployee.h"
#include "ui_addemployee.h"
#include "QString"
#include "serverdriver.h"

AddEmployee::AddEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployee)
{
    ui->setupUi(this);
}

AddEmployee::~AddEmployee()
{
    delete ui;
}

void AddEmployee::on_Add_clicked()
{
    QString name,postt,role,usname,password;
    name=ui->ename->text();
    postt=ui->post->text();
    role=ui->roole->text();
    usname=ui->username->text();
    password=ui->password->text();
    this->hide();
    std::string sname,spost,srole,susname,spassword,response;
    sname=name.toStdString();
    spost=postt.toStdString();
    srole=role.toStdString();
    susname=usname.toStdString();
    spassword=password.toStdString();

    //qDebug()<<name<<postt<<role<<usname<<password;
    ServerDriver s = ServerDriver();
    response=s.addEmployee(sname,spost,srole,susname,spassword);

}

