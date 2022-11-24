#include "discountcode.h"
#include "ui_discountcode.h"
#include "serverdriver.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

DiscountCode::DiscountCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiscountCode)
{

    ui->setupUi(this);
}

DiscountCode::~DiscountCode()
{
    delete ui;
}

void DiscountCode::on_pushButton_clicked()
{
    QString code,val,amt;
    code=ui->lineEdit->text();
    val=ui->lineEdit_3->text();
    amt=ui->lineEdit_2->text();

    std::string s_code,s_val,s_amt,response;
    s_code=code.toStdString();
    s_val=val.toStdString();
    s_amt=amt.toStdString();

    ServerDriver server=ServerDriver();
    response=server.addDiscountCode(s_code,s_amt,s_val);

    this->hide();

}


void DiscountCode::on_pushButton_2_clicked()
{
    ServerDriver s = ServerDriver();
    std::string plainJson = s.getDiscountCodes();
    QString qPlainJson = QString::fromUtf8(plainJson.c_str());
    QByteArray jsonData = qPlainJson.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonArray codes = jsonDocument.array();
    int arraySize = codes.size();

    horizontalHeader.append("Codes");
    horizontalHeader.append("Amount");
    horizontalHeader.append("Validity");

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
        QStandardItem *code = new QStandardItem(obj.value("code").toString());
        QStandardItem *amount = new QStandardItem(obj.value("percentage").toString());
        QStandardItem *validity = new QStandardItem(obj.value("validity").toString());

        model->appendRow(QList<QStandardItem*>()<<code<<amount<<validity);
    }

}


