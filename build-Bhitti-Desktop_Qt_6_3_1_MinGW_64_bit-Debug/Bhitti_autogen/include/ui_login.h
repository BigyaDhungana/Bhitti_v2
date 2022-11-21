/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *Logo;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(668, 440);
        Login->setLayoutDirection(Qt::RightToLeft);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 140, 191, 231));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(300, 10, 101, 81));
        Logo->setStyleSheet(QString::fromUtf8(""));
        Logo->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Asus/Downloads/logo-twitter-png-47449.png")));
        Logo->setScaledContents(true);
        Logo->setOpenExternalLinks(false);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(300, 210, 121, 21));
        lineEdit->setLayoutDirection(Qt::RightToLeft);
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 250, 121, 21));
        lineEdit_2->setFrame(false);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setCursorPosition(0);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 210, 21, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Asus/Downloads/PngItem_2560200.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 250, 21, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Asus/Downloads/kindpng_4751731.png")));
        label_3->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 290, 80, 18));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(51, 51, 51);\n"
"background-color: rgb(122, 122, 122);"));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 17));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QString());
        Logo->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Login", "Username", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
