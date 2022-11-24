#ifndef DELETEEMPLOYEE_H
#define DELETEEMPLOYEE_H

#include <QDialog>

namespace Ui {
class deleteEmployee;
}

class deleteEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit deleteEmployee(QWidget *parent = nullptr);
    ~deleteEmployee();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deleteEmployee *ui;
};

#endif // DELETEEMPLOYEE_H
