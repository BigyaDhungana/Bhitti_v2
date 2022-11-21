/********************************************************************************
** Form generated from reading UI file 'employeedash.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDASH_H
#define UI_EMPLOYEEDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDash
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_4;

    void setupUi(QDialog *EmployeeDash)
    {
        if (EmployeeDash->objectName().isEmpty())
            EmployeeDash->setObjectName(QString::fromUtf8("EmployeeDash"));
        EmployeeDash->resize(766, 432);
        EmployeeDash->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label = new QLabel(EmployeeDash);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 141, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        label_2 = new QLabel(EmployeeDash);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 150, 191, 241));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_3 = new QLabel(EmployeeDash);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 50, 371, 16));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setTabletTracking(false);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
";\n"
"color: rgb(32, 42, 68);"));
        frame = new QFrame(EmployeeDash);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, 150, 341, 241));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 121, 51));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 10, 121, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 90, 121, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 90, 121, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 170, 121, 51));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 170, 121, 51));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        label_4 = new QLabel(EmployeeDash);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 170, 131, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));

        retranslateUi(EmployeeDash);

        QMetaObject::connectSlotsByName(EmployeeDash);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDash)
    {
        EmployeeDash->setWindowTitle(QCoreApplication::translate("EmployeeDash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EmployeeDash", "Hello, Name ", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("EmployeeDash", "Your attendance for today was completed at 00:00 am", nullptr));
        pushButton->setText(QCoreApplication::translate("EmployeeDash", "New Order", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EmployeeDash", "Track Order", nullptr));
        pushButton_3->setText(QCoreApplication::translate("EmployeeDash", "View Product", nullptr));
        pushButton_4->setText(QCoreApplication::translate("EmployeeDash", "Cancel Order", nullptr));
        pushButton_5->setText(QCoreApplication::translate("EmployeeDash", "Update Order", nullptr));
        pushButton_6->setText(QCoreApplication::translate("EmployeeDash", "Add Order Summary", nullptr));
        label_4->setText(QCoreApplication::translate("EmployeeDash", "Agenda for today", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDash: public Ui_EmployeeDash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDASH_H
