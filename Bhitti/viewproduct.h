#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>

namespace Ui {
class ViewProduct;
}

class ViewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProduct(QWidget *parent = nullptr);
    ~ViewProduct();

private:
    Ui::ViewProduct *ui;
};

#endif // VIEWPRODUCT_H
