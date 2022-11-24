#include "viewproduct.h"
#include "ui_viewproduct.h"
#include "serverdriver.h"
ViewProduct::ViewProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewProduct)
{
    ui->setupUi(this);
}

ViewProduct::~ViewProduct()
{
    delete ui;
}

void ViewProduct::on_pushButton_clicked()
{
    QString productid;
    std::string s_productid,response;

    productid=ui->lineEdit->text();
    s_productid=productid.toStdString();

    ServerDriver server=ServerDriver();
    response=server.getProductDetails(s_productid);
    this->hide();
}

