/********************************************************************************
** Form generated from reading UI file 'newproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPRODUCT_H
#define UI_NEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewProduct
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *NewProduct)
    {
        if (NewProduct->objectName().isEmpty())
            NewProduct->setObjectName(QString::fromUtf8("NewProduct"));
        NewProduct->resize(621, 399);
        NewProduct->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label = new QLabel(NewProduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 141, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));
        label_2 = new QLabel(NewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 150, 101, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));
        label_3 = new QLabel(NewProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 150, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));
        label_4 = new QLabel(NewProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 150, 101, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));
        label_5 = new QLabel(NewProduct);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 150, 101, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));
        lineEdit = new QLineEdit(NewProduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 180, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        lineEdit_2 = new QLineEdit(NewProduct);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 180, 91, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        lineEdit_3 = new QLineEdit(NewProduct);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 180, 71, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        comboBox = new QComboBox(NewProduct);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(420, 180, 55, 22));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(239, 239, 239);"));
        pushButton = new QPushButton(NewProduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 180, 81, 21));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(219, 219, 219);"));

        retranslateUi(NewProduct);

        QMetaObject::connectSlotsByName(NewProduct);
    } // setupUi

    void retranslateUi(QDialog *NewProduct)
    {
        NewProduct->setWindowTitle(QCoreApplication::translate("NewProduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewProduct", "Add Product", nullptr));
        label_2->setText(QCoreApplication::translate("NewProduct", "Product Id", nullptr));
        label_3->setText(QCoreApplication::translate("NewProduct", "Product name", nullptr));
        label_4->setText(QCoreApplication::translate("NewProduct", "Selling price", nullptr));
        label_5->setText(QCoreApplication::translate("NewProduct", "Stock", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("NewProduct", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("NewProduct", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("NewProduct", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("NewProduct", "4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("NewProduct", "5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("NewProduct", "6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("NewProduct", "7", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("NewProduct", "8", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("NewProduct", "9", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("NewProduct", "10", nullptr));

        pushButton->setText(QCoreApplication::translate("NewProduct", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProduct: public Ui_NewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPRODUCT_H
