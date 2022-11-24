#include "admindash.h"
#include "ui_admindash.h"
#include<QDebug>
#include "serverdriver.h"
#include "neworder.h"
#include "newproduct.h"
#include "viewproduct.h"
#include "trackorder.h"
#include "cancelorder.h"
#include "login.h"
#include "deleteproduct.h"
#include "attendance.h"
#include "addemployee.h"
#include "deleteemployee.h"
#include "discountcode.h"

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

void AdminDash::on_pushButton_3_clicked()
{
    //this->hide();
    NewOrder *o2=new NewOrder;
    o2->show();

}


void AdminDash::on_pushButton_6_clicked()
{
    //this->hide();
    NewProduct *p2=new NewProduct;
    p2->show();
}


void AdminDash::on_pushButton_4_clicked()
{
    //this->hide();
    TrackOrder *t2=new TrackOrder;
    t2->show();
}


void AdminDash::on_pushButton_7_clicked()
{
    //this->hide();
    ViewProduct *p2=new ViewProduct;
    p2->show();
}


void AdminDash::on_pushButton_5_clicked()
{
    //this->hide();
    CancelOrder *c2=new CancelOrder;
    c2->show();
}


void AdminDash::on_pushButton_12_clicked()
{
    this->hide();
    Login *l2=new Login;
    l2->show();
}


void AdminDash::on_pushButton_8_clicked()
{
    //this->hide();
    DeleteProduct *d2=new DeleteProduct;
    d2->show();
}


void AdminDash::on_pushButton_2_clicked()
{
    //this->hide();
    Attendance *a1=new Attendance;
    a1->show();
}


void AdminDash::on_pushButton_9_clicked()
{
    //this->hide();
    AddEmployee *emp=new AddEmployee;
    emp->show();
}


void AdminDash::on_pushButton_10_clicked()
{
    //this->hide();
    deleteEmployee *del1=new deleteEmployee;
    del1->show();
}


void AdminDash::on_pushButton_11_clicked()
{
    DiscountCode *dc=new DiscountCode;
    dc->show();
}

