#ifndef TRACKORDER_H
#define TRACKORDER_H

#include <QDialog>

namespace Ui {
class TrackOrder;
}

class TrackOrder : public QDialog
{
    Q_OBJECT

public:
    explicit TrackOrder(QWidget *parent = nullptr);
    ~TrackOrder();

private:
    Ui::TrackOrder *ui;
};

#endif // TRACKORDER_H
