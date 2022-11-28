#include "deleteemployee.h"
#include "ui_deleteemployee.h"
#include "serverdriver.h"
#include "happyvitti.h"

deleteEmployee::deleteEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteEmployee)
{
    ui->setupUi(this);
}

deleteEmployee::~deleteEmployee()
{
    delete ui;
}

void deleteEmployee::on_pushButton_clicked()
{
    QString emp_id;
    emp_id=ui->lineEdit->text();
    std::string s_emp_id,response;
    s_emp_id=emp_id.toStdString();
    ServerDriver server=ServerDriver();
    response=server.removeEmployee(s_emp_id);
    this->hide();
    HappyVitti *happy=new HappyVitti;
    happy->show();

}

