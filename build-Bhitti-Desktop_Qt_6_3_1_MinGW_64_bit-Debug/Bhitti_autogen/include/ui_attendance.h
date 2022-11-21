/********************************************************************************
** Form generated from reading UI file 'attendance.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_H
#define UI_ATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Attendance
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *Attendance)
    {
        if (Attendance->objectName().isEmpty())
            Attendance->setObjectName(QString::fromUtf8("Attendance"));
        Attendance->resize(472, 331);
        Attendance->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label = new QLabel(Attendance);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 271, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        pushButton = new QPushButton(Attendance);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 170, 80, 18));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Attendance);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 141, 20));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));
        comboBox = new QComboBox(Attendance);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 170, 101, 22));

        retranslateUi(Attendance);

        QMetaObject::connectSlotsByName(Attendance);
    } // setupUi

    void retranslateUi(QDialog *Attendance)
    {
        Attendance->setWindowTitle(QCoreApplication::translate("Attendance", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Attendance", "Attendance Report", nullptr));
        pushButton->setText(QCoreApplication::translate("Attendance", "Submit", nullptr));
        label_2->setText(QCoreApplication::translate("Attendance", "Select Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attendance: public Ui_Attendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_H
