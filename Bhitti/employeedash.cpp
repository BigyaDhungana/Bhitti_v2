#include "employeedash.h"
#include "ui_employeedash.h"
#include "neworder.h"
#include "trackorder.h"
#include "viewproduct.h"
#include "serverdriver.h"
#include "cancelorder.h"
#include "login.h"
#include "discountcode.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

EmployeeDash::EmployeeDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeDash)
{
    ui->setupUi(this);
    ServerDriver s = ServerDriver();
    std::string plainJson = s.getAgendas();
    QString qPlainJson = QString::fromUtf8(plainJson.c_str());
    QByteArray jsonData = qPlainJson.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonArray codes = jsonDocument.array();
    int arraySize = codes.size();

    horizontalHeader.append("Agenda");
    horizontalHeader.append("Posted On");

    model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->verticalHeader()->setDefaultSectionSize(30);
    ui->tableView->horizontalHeader()->setDefaultSectionSize(400);
//    ui->tableView->setShowGrid(false);

    for(int i=0; i<arraySize; i++){
        QJsonValue abc = codes[i];
        QJsonObject obj = abc.toObject();
        QStandardItem *agenda = new QStandardItem(obj.value("agenda").toString());
        QStandardItem *datetime = new QStandardItem(obj.value("postedDate").toString());

        model->appendRow(QList<QStandardItem*>()<<agenda<<datetime);
    }
}

EmployeeDash::~EmployeeDash()
{
    delete ui;
}

void EmployeeDash::on_pushButton_clicked()
{
    //this->hide();
    NewOrder *o=new NewOrder;
    o->show();
}


void EmployeeDash::on_pushButton_2_clicked()
{
    //this->hide();
    TrackOrder *t=new TrackOrder;
    t->show();
}


void EmployeeDash::on_pushButton_3_clicked()
{
    //this->hide();
    CancelOrder *c=new CancelOrder;
    c->show();

}


void EmployeeDash::on_pushButton_4_clicked()
{
    //this->hide();
    ViewProduct *v=new ViewProduct;
    v->show();
}


void EmployeeDash::on_pushButton_6_clicked()
{
    this->hide();
    Login *newentry=new Login;
    newentry->show();

}


void EmployeeDash::on_pushButton_5_clicked()
{
    DiscountCode *dce=new DiscountCode;
    dce->show();
}


