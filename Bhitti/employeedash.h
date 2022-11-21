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

private:
    Ui::EmployeeDash *ui;
};

#endif // EMPLOYEEDASH_H
