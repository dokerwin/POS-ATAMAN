/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *login_btn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *login_line;
    QLabel *pasword_label;
    QLineEdit *pasword_line;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(487, 399);
        Login->setStyleSheet(QString::fromUtf8("  background-color: #ABEBC6;\n"
" "));
        login_btn = new QPushButton(Login);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(150, 340, 186, 41));
        login_btn->setStyleSheet(QString::fromUtf8("  background-color: blue;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 20, 301, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Harlow Solid Italic"));
        font.setPointSize(18);
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setMouseTracking(false);
        label_3->setAcceptDrops(true);

        verticalLayout->addWidget(label_3);

        login_line = new QLineEdit(layoutWidget);
        login_line->setObjectName(QString::fromUtf8("login_line"));
        login_line->setStyleSheet(QString::fromUtf8("background-color: white;"));

        verticalLayout->addWidget(login_line);

        pasword_label = new QLabel(layoutWidget);
        pasword_label->setObjectName(QString::fromUtf8("pasword_label"));
        pasword_label->setFont(font);
        pasword_label->setMouseTracking(false);
        pasword_label->setAcceptDrops(true);

        verticalLayout->addWidget(pasword_label);

        pasword_line = new QLineEdit(layoutWidget);
        pasword_line->setObjectName(QString::fromUtf8("pasword_line"));
        pasword_line->setStyleSheet(QString::fromUtf8("background-color: white;"));

        verticalLayout->addWidget(pasword_line);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        login_btn->setText(QApplication::translate("Login", "Login", nullptr));
        label_3->setText(QApplication::translate("Login", " Login ", nullptr));
        pasword_label->setText(QApplication::translate("Login", " Has\305\202o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
