#include "attendance.h"
#include "ui_attendance.h"

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
