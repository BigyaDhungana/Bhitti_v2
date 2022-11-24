#ifndef EMPLOYEEDASH_H
#define EMPLOYEEDASH_H

#include <QDialog>
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>

namespace Ui {
class EmployeeDash;
}

class EmployeeDash : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeDash(QWidget *parent = nullptr);
    ~EmployeeDash();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::EmployeeDash *ui;
    QStandardItemModel *model;
       QStringList horizontalHeader;
       QStringList verticalHeader;
};

#endif // EMPLOYEEDASH_H
