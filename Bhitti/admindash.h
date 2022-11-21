#ifndef ADMINDASH_H
#define ADMINDASH_H

#include <QDialog>

namespace Ui {
class AdminDash;
}

class AdminDash : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDash(QWidget *parent = nullptr);
    ~AdminDash();

private:
    Ui::AdminDash *ui;
};

#endif // ADMINDASH_H
