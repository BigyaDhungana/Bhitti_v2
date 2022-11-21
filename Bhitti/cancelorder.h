#ifndef CANCELORDER_H
#define CANCELORDER_H

#include <QDialog>

namespace Ui {
class CancelOrder;
}

class CancelOrder : public QDialog
{
    Q_OBJECT

public:
    explicit CancelOrder(QWidget *parent = nullptr);
    ~CancelOrder();

private:
    Ui::CancelOrder *ui;
};

#endif // CANCELORDER_H
