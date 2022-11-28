#ifndef ADMINAGENDA_H
#define ADMINAGENDA_H

#include <QDialog>
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>

namespace Ui {
class AdminAgenda;
}

class AdminAgenda : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAgenda(QWidget *parent = nullptr);
    ~AdminAgenda();

private:
    Ui::AdminAgenda *ui;
    QStandardItemModel *model;
       QStringList horizontalHeader;
       QStringList verticalHeader;
};

#endif // ADMINAGENDA_H
