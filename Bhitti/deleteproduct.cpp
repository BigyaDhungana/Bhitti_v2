#include "deleteproduct.h"
#include "ui_deleteproduct.h"
#include "serverdriver.h"
#include "happyvitti.h"
DeleteProduct::DeleteProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteProduct)
{
    ui->setupUi(this);
}

DeleteProduct::~DeleteProduct()
{
    delete ui;
}

void DeleteProduct::on_Delete_clicked()
{
    QString productid;
    productid=ui->lineEdit->text();
    std::string s_productid,response;
    s_productid=productid.toStdString();
    ServerDriver server=ServerDriver();
    response=server.deleteInventory(s_productid);
    this->hide();

    HappyVitti *happy=new HappyVitti;
    happy->show();


}

