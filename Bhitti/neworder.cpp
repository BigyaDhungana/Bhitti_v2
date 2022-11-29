#include "neworder.h"
#include "ui_neworder.h"
#include "serverdriver.h"
#include "happyvitti.h"
NewOrder::NewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewOrder)
{
    ui->setupUi(this);
}

NewOrder::~NewOrder()
{
    delete ui;
}

void NewOrder::on_pushButton_clicked()
{
    QString productid,name,contact,address,prices,discount_codes,mop;
    std::string s_productid,s_name,s_contact,s_address,s_price,response,s_discount_codes,s_mop;
    productid=ui->pid->text();
    name=ui->cname->text();
    contact=ui->contact->text();
    address=ui->add->text();
    prices=ui->price->text();
    discount_codes=ui->pid_7->text();
    mop=ui->pid_6->text();

    s_name=name.toStdString();
    s_productid=productid.toStdString();
    s_contact=contact.toStdString();
    s_address=address.toStdString();
    s_price=prices.toStdString();
    s_discount_codes=discount_codes.toStdString();
    s_mop=mop.toStdString();

    ServerDriver server =ServerDriver();
    response=server.addOrder(s_productid,s_name,s_contact,s_address,s_price,s_discount_codes, s_mop);
    this->hide();
    HappyVitti *happy=new HappyVitti;
    happy->show();

}


