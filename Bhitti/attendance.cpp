#include "attendance.h"
#include "ui_attendance.h"
#include "serverdriver.h"
//JSON Stuff
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

Attendance::Attendance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Attendance)
{
    ui->setupUi(this);
}

Attendance::~Attendance()
{
    delete ui;
}

void Attendance::on_submit_clicked()
{
    QString empid;
    empid=ui->line_id->text();
    std::string s_empid,response;
    s_empid=empid.toStdString();
    //qDebug()<<empid;
    ServerDriver server=ServerDriver();
    response=server.getAttendanceDetails(s_empid);
    QString qPlainJson = QString::fromUtf8(response.c_str());
    QByteArray jsonData = qPlainJson.toUtf8();
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData);
    QJsonArray codes = jsonDocument.array();
    int arraySize = codes.size();

    horizontalHeader.append("Employee ID");
    horizontalHeader.append("Employee Name");
    horizontalHeader.append("Date Time");

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
        QStandardItem *code = new QStandardItem(obj.value("employeeID").toString());
        QStandardItem *amount = new QStandardItem(obj.value("employeeName").toString());
        QStandardItem *validity = new QStandardItem(obj.value("datetime").toString());

        model->appendRow(QList<QStandardItem*>()<<code<<amount<<validity);
    }


}

