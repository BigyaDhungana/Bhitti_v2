/********************************************************************************
** Form generated from reading UI file 'viewproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCT_H
#define UI_VIEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewProduct
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ViewProduct)
    {
        if (ViewProduct->objectName().isEmpty())
            ViewProduct->setObjectName(QString::fromUtf8("ViewProduct"));
        ViewProduct->resize(546, 426);
        ViewProduct->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        lineEdit = new QLineEdit(ViewProduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(192, 200, 141, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));
        pushButton = new QPushButton(ViewProduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 200, 80, 18));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(ViewProduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 161, 21));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));
        label_2 = new QLabel(ViewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 200, 111, 16));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        retranslateUi(ViewProduct);

        QMetaObject::connectSlotsByName(ViewProduct);
    } // setupUi

    void retranslateUi(QDialog *ViewProduct)
    {
        ViewProduct->setWindowTitle(QCoreApplication::translate("ViewProduct", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewProduct", "Get Details", nullptr));
        label->setText(QCoreApplication::translate("ViewProduct", "View Product", nullptr));
        label_2->setText(QCoreApplication::translate("ViewProduct", "Product I.D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewProduct: public Ui_ViewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCT_H
