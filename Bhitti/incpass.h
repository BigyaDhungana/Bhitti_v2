#ifndef INCPASS_H
#define INCPASS_H

#include <QDialog>

namespace Ui {
class incpass;
}

class incpass : public QDialog
{
    Q_OBJECT

public:
    explicit incpass(QWidget *parent = nullptr);
    ~incpass();

private:
    Ui::incpass *ui;
};

#endif // INCPASS_H
