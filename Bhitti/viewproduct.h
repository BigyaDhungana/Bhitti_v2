#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>

namespace Ui {
class ViewProduct;
}

class ViewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProduct(QWidget *parent = nullptr);
    ~ViewProduct();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ViewProduct *ui;
    QStandardItemModel *model;
    QStringList horizontalHeader;
    QStringList verticalHeader;
};

#endif // VIEWPRODUCT_H
