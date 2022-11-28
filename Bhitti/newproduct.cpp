#include "newproduct.h"
#include "ui_newproduct.h"
#include "serverdriver.h"
#include "happyvitti.h"
NewProduct::NewProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProduct)
{
    ui->setupUi(this);
}

NewProduct::~NewProduct()
{
    delete ui;
}

void NewProduct::on_pushButton_clicked()
{
    QString product_id,product_name,sellingprice,quantity;
    std::string s_product_id,s_product_name,s_sellingprice,s_quantity,response;

    product_name=ui->pname->text();
    sellingprice=ui->price->text();
    quantity=ui->stk->text();

   s_product_id=product_id.toStdString() ;
   s_product_name=product_name.toStdString() ;
   s_sellingprice=sellingprice.toStdString() ;
   s_quantity=quantity.toStdString();

    ServerDriver server=ServerDriver();
    response=server.addInventory(s_product_name,s_sellingprice,"0",s_sellingprice,s_quantity);


    this->hide();
    HappyVitti *happy=new HappyVitti;
    happy->show();



}

