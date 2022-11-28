#ifndef HAPPYVITTI_H
#define HAPPYVITTI_H

#include <QDialog>

namespace Ui {
class HappyVitti;
}

class HappyVitti : public QDialog
{
    Q_OBJECT

public:
    explicit HappyVitti(QWidget *parent = nullptr);
    ~HappyVitti();

private:
    Ui::HappyVitti *ui;
};

#endif // HAPPYVITTI_H
