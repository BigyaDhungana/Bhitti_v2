#include "trackorder.h"
#include "ui_trackorder.h"
#include "serverdriver.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

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
    QString responseStr = QString::fromStdString(response);
    QByteArray jsonData = responseStr.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonObject object = jsonDocument.object();

    horizontalHeader.append("Order ID");
        horizontalHeader.append("Product ID");
        horizontalHeader.append("Customer Name");
        horizontalHeader.append("Contact");
        horizontalHeader.append("Address");
        horizontalHeader.append("Amount");

        // Here we are creating our model

        model = new QStandardItemModel();

        model->setHorizontalHeaderLabels(horizontalHeader);
        model->setVerticalHeaderLabels(verticalHeader);

        ui->tableView->setModel(model); // This is necessary to display the data on table view
        ui->tableView->verticalHeader()->setVisible(false);
        ui->tableView->verticalHeader()->setDefaultSectionSize(10);
        //ui->tableView->setShowGrid(false);

        // Here you can set your data in table view

        QStandardItem *col1 = new QStandardItem(object.value("orderID").toString());
        QStandardItem *col2 = new QStandardItem(object.value("productID").toString());
        QStandardItem *col3 = new QStandardItem(object.value("customerName").toString());
        QStandardItem *col4 = new QStandardItem(object.value("customerContact").toString());
        QStandardItem *col5 = new QStandardItem(object.value("customerAddress").toString());
        QStandardItem *col6 = new QStandardItem(object.value("price").toString());

        model->appendRow( QList<QStandardItem*>() << col1 << col2 << col3 << col4 << col5 << col6);

}

