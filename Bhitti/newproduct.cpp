#include "newproduct.h"
#include "ui_newproduct.h"

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
