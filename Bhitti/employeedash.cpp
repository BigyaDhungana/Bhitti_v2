#include "employeedash.h"
#include "ui_employeedash.h"

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
