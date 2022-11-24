#include "employeedash.h"
#include "ui_employeedash.h"
#include "neworder.h"
#include "trackorder.h"
#include "viewproduct.h"
#include "cancelorder.h"
#include "login.h"
#include "discountcode.h"
EmployeeDash::EmployeeDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeDash)
{
    ui->setupUi(this);
}

EmployeeDash::~EmployeeDash()
{
    delete ui;
}

void EmployeeDash::on_pushButton_clicked()
{
    //this->hide();
    NewOrder *o=new NewOrder;
    o->show();
}


void EmployeeDash::on_pushButton_2_clicked()
{
    //this->hide();
    TrackOrder *t=new TrackOrder;
    t->show();
}


void EmployeeDash::on_pushButton_3_clicked()
{
    //this->hide();
    CancelOrder *c=new CancelOrder;
    c->show();

}


void EmployeeDash::on_pushButton_4_clicked()
{
    //this->hide();
    ViewProduct *v=new ViewProduct;
    v->show();
}


void EmployeeDash::on_pushButton_6_clicked()
{
    this->hide();
    Login *newentry=new Login;
    newentry->show();

}


void EmployeeDash::on_pushButton_5_clicked()
{
    DiscountCode *dce=new DiscountCode;
    dce->show();
}

