#ifndef NEWORDER_H
#define NEWORDER_H

#include <QDialog>

namespace Ui {
class NewOrder;
}

class NewOrder : public QDialog
{
    Q_OBJECT

public:
    explicit NewOrder(QWidget *parent = nullptr);
    ~NewOrder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewOrder *ui;
};

#endif // NEWORDER_H
