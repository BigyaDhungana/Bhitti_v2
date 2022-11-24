#include "neworder.h"
#include "ui_neworder.h"
#include "serverdriver.h"
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
    QString productid,name,contact,address,prices;
    std::string s_productid,s_name,s_contact,s_address,s_price,response;
    productid=ui->pid->text();
    name=ui->cname->text();
    contact=ui->contact->text();
    address=ui->add->text();
    prices=ui->price->text();

    s_name=name.toStdString();
    s_productid=productid.toStdString();
    s_contact=contact.toStdString();
    s_address=address.toStdString();
    s_price=prices.toStdString();

    ServerDriver server =ServerDriver();
    response=server.addOrder(s_productid,s_name,s_contact,s_address,s_price);
    this->hide();
}

