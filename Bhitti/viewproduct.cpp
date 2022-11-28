#include "viewproduct.h"
#include "qheaderview.h"
#include "ui_viewproduct.h"
#include "serverdriver.h"
//JSON Stuff
#include<QTableView>
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

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
    QString responseStr = QString::fromStdString(response);
    QByteArray jsonData = responseStr.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonObject object = jsonDocument.object();

        horizontalHeader.append("Product ID");
        horizontalHeader.append("Product Name");
        horizontalHeader.append("Min. Price");
        horizontalHeader.append("Max. Price");
        horizontalHeader.append("Price");
        horizontalHeader.append("Stock");

        // Here we are creating our model

        model = new QStandardItemModel();

        model->setHorizontalHeaderLabels(horizontalHeader);
        model->setVerticalHeaderLabels(verticalHeader);

        ui->tableView->setModel(model); // This is necessary to display the data on table view
        ui->tableView->verticalHeader()->setVisible(false);
        ui->tableView->verticalHeader()->setDefaultSectionSize(10);
        //ui->tableView->setShowGrid(false);

        // Here you can set your data in table view

        QStandardItem *col1 = new QStandardItem(object.value("productID").toString());
        QStandardItem *col2 = new QStandardItem(object.value("productName").toString());
        QStandardItem *col3 = new QStandardItem(object.value("minPrice").toString());
        QStandardItem *col4 = new QStandardItem(object.value("maxPrice").toString());
        QStandardItem *col5 = new QStandardItem(object.value("price").toString());
        QStandardItem *col6 = new QStandardItem(object.value("stock").toString());

        model->appendRow( QList<QStandardItem*>() << col1 << col2 << col3 << col4 << col5 << col6);





}


void ViewProduct::on_pushButton_2_clicked()
{
    ServerDriver server=ServerDriver();
    std::string response=server.getAllProducts();
    QString responseStr = QString::fromStdString(response);
    QString qPlainJson = QString::fromUtf8(response.c_str());
    QByteArray jsonData = qPlainJson.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonArray codes = jsonDocument.array();
    int arraySize = codes.size();

    horizontalHeader.append("Product ID");
    horizontalHeader.append("Name");
    horizontalHeader.append("Min. Price");
    horizontalHeader.append("Max. Price");
    horizontalHeader.append("Price");
    horizontalHeader.append("Stock");


    model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->verticalHeader()->setDefaultSectionSize(10);
//    ui->tableView->setShowGrid(false);

    for(int i=0; i<arraySize; i++){
        QJsonValue abc = codes[i];
        QJsonObject obj = abc.toObject();
        QStandardItem *id = new QStandardItem(obj.value("productID").toString());
        QStandardItem *pid = new QStandardItem(obj.value("productName").toString());
        QStandardItem *name = new QStandardItem(obj.value("minPrice").toString());
        QStandardItem *cont = new QStandardItem(obj.value("maxPrice").toString());
        QStandardItem *add = new QStandardItem(obj.value("price").toString());
        QStandardItem *price = new QStandardItem(obj.value("stock").toString());\

        model->appendRow(QList<QStandardItem*>()<<id<<pid<<name<<cont<<add<<price);
    }
}

