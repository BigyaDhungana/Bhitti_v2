#include "trackorder.h"
#include "ui_trackorder.h"
#include "serverdriver.h"
TrackOrder::TrackOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrackOrder)
{
    ui->setupUi(this);
}

TrackOrder::~TrackOrder()
{
    delete ui;
}

void TrackOrder::on_pushButton_clicked()
{
    QString orderid;
    std::string s_orderid,response;
    orderid=ui->lineEdit->text();
    s_orderid=orderid.toStdString();
    ServerDriver server=ServerDriver();
    response=server.getOrderDetails(s_orderid);
    this->hide();
}

