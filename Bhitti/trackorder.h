#ifndef TRACKORDER_H
#define TRACKORDER_H

#include <QDialog>
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>

namespace Ui {
class TrackOrder;
}

class TrackOrder : public QDialog
{
    Q_OBJECT

public:
    explicit TrackOrder(QWidget *parent = nullptr);
    ~TrackOrder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TrackOrder *ui;
    QStandardItemModel *model;
       QStringList horizontalHeader;
       QStringList verticalHeader;
};

#endif // TRACKORDER_H
