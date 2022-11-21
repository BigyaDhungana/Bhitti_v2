#include "cancelorder.h"
#include "ui_cancelorder.h"

CancelOrder::CancelOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CancelOrder)
{
    ui->setupUi(this);
}

CancelOrder::~CancelOrder()
{
    delete ui;
}
