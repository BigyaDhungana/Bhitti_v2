#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <QDialog>
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>

namespace Ui {
class Attendance;
}

class Attendance : public QDialog
{
    Q_OBJECT

public:
    explicit Attendance(QWidget *parent = nullptr);
    ~Attendance();

private slots:
    void on_submit_clicked();

private:
    Ui::Attendance *ui;
    QStandardItemModel *model;
    QStringList horizontalHeader;
    QStringList verticalHeader;
};

#endif // ATTENDANCE_H
