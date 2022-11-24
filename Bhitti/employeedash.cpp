#include "employeedash.h"
#include "ui_employeedash.h"
#include "neworder.h"
#include "trackorder.h"
#include "viewproduct.h"
#include "cancelorder.h"

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
    this->hide();
    NewOrder *o=new NewOrder;
    o->showMaximized();
}


void EmployeeDash::on_pushButton_2_clicked()
{
    this->hide();
    TrackOrder *t=new TrackOrder;
    t->showMaximized();
}


void EmployeeDash::on_pushButton_3_clicked()
{
    this->hide();
    ViewProduct *v=new ViewProduct;
    v->showMaximized();
}


void EmployeeDash::on_pushButton_4_clicked()
{
    this->hide();
    CancelOrder *c=new CancelOrder;
    c->showMaximized();
}

