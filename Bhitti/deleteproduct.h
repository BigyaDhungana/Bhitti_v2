#ifndef DELETEPRODUCT_H
#define DELETEPRODUCT_H

#include <QDialog>

namespace Ui {
class DeleteProduct;
}

class DeleteProduct : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteProduct(QWidget *parent = nullptr);
    ~DeleteProduct();

private slots:
    void on_Delete_clicked();

private:
    Ui::DeleteProduct *ui;
};

#endif // DELETEPRODUCT_H
