/********************************************************************************
** Form generated from reading UI file 'trackorder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKORDER_H
#define UI_TRACKORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TrackOrder
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *TrackOrder)
    {
        if (TrackOrder->objectName().isEmpty())
            TrackOrder->setObjectName(QString::fromUtf8("TrackOrder"));
        TrackOrder->resize(440, 332);
        TrackOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label = new QLabel(TrackOrder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 161, 21));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));
        label_2 = new QLabel(TrackOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 160, 111, 16));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));
        lineEdit = new QLineEdit(TrackOrder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 160, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));
        pushButton = new QPushButton(TrackOrder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 160, 80, 18));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(TrackOrder);

        QMetaObject::connectSlotsByName(TrackOrder);
    } // setupUi

    void retranslateUi(QDialog *TrackOrder)
    {
        TrackOrder->setWindowTitle(QCoreApplication::translate("TrackOrder", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TrackOrder", "Track Order", nullptr));
        label_2->setText(QCoreApplication::translate("TrackOrder", "Order I.D", nullptr));
        pushButton->setText(QCoreApplication::translate("TrackOrder", "Track", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackOrder: public Ui_TrackOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKORDER_H
