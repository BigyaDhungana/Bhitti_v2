#ifndef DISCOUNTCODE_H
#define DISCOUNTCODE_H

#include <QDialog>

namespace Ui {
class DiscountCode;
}

class DiscountCode : public QDialog
{
    Q_OBJECT

public:
    explicit DiscountCode(QWidget *parent = nullptr);
    ~DiscountCode();

private:
    Ui::DiscountCode *ui;
};

#endif // DISCOUNTCODE_H
