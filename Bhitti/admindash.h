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

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::AdminDash *ui;
};

#endif // ADMINDASH_H
