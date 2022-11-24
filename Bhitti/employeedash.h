#ifndef EMPLOYEEDASH_H
#define EMPLOYEEDASH_H

#include <QDialog>

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

private:
    Ui::EmployeeDash *ui;
};

#endif // EMPLOYEEDASH_H
