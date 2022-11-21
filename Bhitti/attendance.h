#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <QDialog>

namespace Ui {
class Attendance;
}

class Attendance : public QDialog
{
    Q_OBJECT

public:
    explicit Attendance(QWidget *parent = nullptr);
    ~Attendance();

private:
    Ui::Attendance *ui;
};

#endif // ATTENDANCE_H
