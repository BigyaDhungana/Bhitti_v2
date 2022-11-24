#include "cancelorder.h"
#include "ui_cancelorder.h"
#include "serverdriver.h"
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

void CancelOrder::on_Cancel_clicked()
{
    QString order_id;
    order_id=ui->l_orderid->text();
    this->hide();
    std::string s_order_id,response;
    s_order_id=order_id.toStdString();
    ServerDriver server=ServerDriver();
    response=server.deleteOrders(s_order_id);
    //qDebug()<<order_id;
}

