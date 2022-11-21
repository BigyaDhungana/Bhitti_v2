/********************************************************************************
** Form generated from reading UI file 'cancelorder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELORDER_H
#define UI_CANCELORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CancelOrder
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *CancelOrder)
    {
        if (CancelOrder->objectName().isEmpty())
            CancelOrder->setObjectName(QString::fromUtf8("CancelOrder"));
        CancelOrder->resize(580, 329);
        CancelOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        lineEdit = new QLineEdit(CancelOrder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 160, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));
        pushButton = new QPushButton(CancelOrder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 160, 80, 18));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(CancelOrder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 161, 21));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));
        label_2 = new QLabel(CancelOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 111, 16));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        retranslateUi(CancelOrder);

        QMetaObject::connectSlotsByName(CancelOrder);
    } // setupUi

    void retranslateUi(QDialog *CancelOrder)
    {
        CancelOrder->setWindowTitle(QCoreApplication::translate("CancelOrder", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("CancelOrder", "Get Details", nullptr));
        label->setText(QCoreApplication::translate("CancelOrder", "Cancel Order", nullptr));
        label_2->setText(QCoreApplication::translate("CancelOrder", "Product Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CancelOrder: public Ui_CancelOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELORDER_H
