#include "attendance.h"
#include "ui_attendance.h"
#include "serverdriver.h"

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
    this->hide();
    ServerDriver server=ServerDriver();
    response=server.getAttendanceDetails(s_empid);
}

