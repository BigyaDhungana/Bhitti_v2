#include "viewproduct.h"
#include "ui_viewproduct.h"

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
