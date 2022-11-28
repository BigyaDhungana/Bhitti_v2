#include "adminagenda.h"
#include "ui_adminagenda.h"
#include "serverdriver.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>



AdminAgenda::AdminAgenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAgenda)
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
//    ui->tableView->setShowGrid(false);

    for(int i=0; i<arraySize; i++){
        QJsonValue abc = codes[i];
        QJsonObject obj = abc.toObject();
        QStandardItem *agenda = new QStandardItem(obj.value("agenda").toString());
        QStandardItem *datetime = new QStandardItem(obj.value("postedDate").toString());

        model->appendRow(QList<QStandardItem*>()<<agenda<<datetime);
    }
}

AdminAgenda::~AdminAgenda()
{
    delete ui;
}
