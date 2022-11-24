#include "discountcode.h"
#include "ui_discountcode.h"
#include "serverdriver.h"
DiscountCode::DiscountCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiscountCode)
{
    ui->setupUi(this);
}

DiscountCode::~DiscountCode()
{
    delete ui;
}

void DiscountCode::on_pushButton_clicked()
{
    QString code,val,amt;
    code=ui->lineEdit->text();
    val=ui->lineEdit_3->text();
    amt=ui->lineEdit_2->text();

    std::string s_code,s_val,s_amt,response;
    s_code=code.toStdString();
    s_val=val.toStdString();
    s_amt=amt.toStdString();

    ServerDriver server=ServerDriver();
    response=server.addDiscountCode(s_code,s_amt,s_val);

    this->hide();

}

