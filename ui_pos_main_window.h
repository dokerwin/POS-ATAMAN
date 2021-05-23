/********************************************************************************
** Form generated from reading UI file 'pos_main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POS_MAIN_WINDOW_H
#define UI_POS_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_POS_MAIN_WINDOW
{
public:
    QWidget *centralwidget;
    QWidget *topWidget;
    QPushButton *refaund_btn;
    QPushButton *setings_btn;
    QPushButton *refreshdata_btn;
    QPushButton *getcash_btn;
    QPushButton *close_shift_btn;
    QWidget *widget;
    QPushButton *topMenu_btn;
    QWidget *widget_3;
    QTableView *tableView_readonly;
    QLabel *label;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QLabel *search_lbl;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QLabel *care_lbl;
    QLabel *toys_lbl;
    QLabel *baby_prod_lbl;
    QLabel *sports_equipment_lbl;
    QLabel *clothing_lbl;
    QLabel *candy_lbl_2;
    QLabel *food_lbl_2;
    QLabel *domestic_imblements_lbl;
    QLabel *leather_goods_lbl;
    QLabel *furnitura_lbl;
    QLabel *electronics_lbl;
    QLabel *toiletry_lbl;
    QWidget *Vegetbales_page;
    QWidget *Candy_page;
    QWidget *Clothes_page;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *POS_MAIN_WINDOW)
    {
        if (POS_MAIN_WINDOW->objectName().isEmpty())
            POS_MAIN_WINDOW->setObjectName(QString::fromUtf8("POS_MAIN_WINDOW"));
        POS_MAIN_WINDOW->resize(1368, 853);
        centralwidget = new QWidget(POS_MAIN_WINDOW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        topWidget = new QWidget(centralwidget);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 1261, 191));
        topWidget->setStyleSheet(QString::fromUtf8("background-image:url(\"C:/Users/nikna/OneDrive/Dokumenty/POS-ATAMAN/images/topWidget.png\");\n"
" background-position: center;"));
        refaund_btn = new QPushButton(topWidget);
        refaund_btn->setObjectName(QString::fromUtf8("refaund_btn"));
        refaund_btn->setGeometry(QRect(330, 80, 111, 61));
        refaund_btn->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 0px 15px 3px #23395e;\n"
"	background:linear-gradient(to bottom, #2e466e 5%, #415989 100%);\n"
"	background-color:#2e466e;\n"
"	border-radius:17px;\n"
"	border:1px solid #1f2f47;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	padding:6px 13px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #263666;"));
        setings_btn = new QPushButton(topWidget);
        setings_btn->setObjectName(QString::fromUtf8("setings_btn"));
        setings_btn->setGeometry(QRect(130, 80, 111, 61));
        setings_btn->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 0px 15px 3px #23395e;\n"
"	background:linear-gradient(to bottom, #2e466e 5%, #415989 100%);\n"
"	background-color:#2e466e;\n"
"	border-radius:17px;\n"
"	border:1px solid #1f2f47;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	padding:6px 13px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #263666;"));
        refreshdata_btn = new QPushButton(topWidget);
        refreshdata_btn->setObjectName(QString::fromUtf8("refreshdata_btn"));
        refreshdata_btn->setGeometry(QRect(560, 80, 151, 61));
        refreshdata_btn->setStyleSheet(QString::fromUtf8("\n"
"	background:linear-gradient(to bottom, #2e466e 5%, #415989 100%);\n"
"	background-color:#2e466e;\n"
"	border-radius:17px;\n"
"	border:1px solid #1f2f47;\n"
"\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	padding:6px 13px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #263666;"));
        getcash_btn = new QPushButton(topWidget);
        getcash_btn->setObjectName(QString::fromUtf8("getcash_btn"));
        getcash_btn->setGeometry(QRect(840, 80, 151, 61));
        getcash_btn->setStyleSheet(QString::fromUtf8("\n"
"	background:linear-gradient(to bottom, #2e466e 5%, #415989 100%);\n"
"	background-color:#2e466e;\n"
"	border-radius:17px;\n"
"	border:1px solid #1f2f47;\n"
"\n"
"\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	padding:6px 13px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #263666;"));
        close_shift_btn = new QPushButton(topWidget);
        close_shift_btn->setObjectName(QString::fromUtf8("close_shift_btn"));
        close_shift_btn->setGeometry(QRect(1090, 80, 151, 61));
        close_shift_btn->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 0px 15px 3px #23395e;\n"
"	background:linear-gradient(to bottom, #2e466e 5%, #415989 100%);\n"
"	background-color:#2e466e;\n"
"	border-radius:17px;\n"
"	border:1px solid #1f2f47;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	padding:6px 13px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #263666;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1261, 41));
        widget->setStyleSheet(QString::fromUtf8(" background-color:#5BC0BE;"));
        topMenu_btn = new QPushButton(widget);
        topMenu_btn->setObjectName(QString::fromUtf8("topMenu_btn"));
        topMenu_btn->setGeometry(QRect(1040, 10, 93, 28));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(670, 440, 591, 421));
        tableView_readonly = new QTableView(widget_3);
        tableView_readonly->setObjectName(QString::fromUtf8("tableView_readonly"));
        tableView_readonly->setGeometry(QRect(0, 0, 591, 351));
        tableView_readonly->setStyleSheet(QString::fromUtf8(" selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                stop: 0 #55aaff, stop: 1 black);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 710, 671, 81));
        label->setStyleSheet(QString::fromUtf8(" border: 1px solid #199909;\n"
"            border-radius: 6px;\n"
"            background-color: #116a06;\n"
"            background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 0.67, \n"
"            stop: 0 #22c70d, stop: 1 #116a06);\n"
"text:center;"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 80, 671, 631));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(-10, 40, 641, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 5px;\n"
"    border-radius: 1px;\n"
"    border-color: blue;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        search_lbl = new QLabel(centralwidget);
        search_lbl->setObjectName(QString::fromUtf8("search_lbl"));
        search_lbl->setGeometry(QRect(630, 40, 41, 41));
        search_lbl->setStyleSheet(QString::fromUtf8(" selection-border-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                stop: 0 #55aaff, stop: 1 black);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(669, 39, 591, 401));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        care_lbl = new QLabel(page);
        care_lbl->setObjectName(QString::fromUtf8("care_lbl"));
        QFont font;
        font.setPointSize(16);
        care_lbl->setFont(font);
        care_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        care_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(care_lbl, 2, 4, 1, 1);

        toys_lbl = new QLabel(page);
        toys_lbl->setObjectName(QString::fromUtf8("toys_lbl"));
        toys_lbl->setFont(font);
        toys_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        toys_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(toys_lbl, 2, 0, 1, 1);

        baby_prod_lbl = new QLabel(page);
        baby_prod_lbl->setObjectName(QString::fromUtf8("baby_prod_lbl"));
        baby_prod_lbl->setFont(font);
        baby_prod_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        baby_prod_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(baby_prod_lbl, 1, 0, 1, 1);

        sports_equipment_lbl = new QLabel(page);
        sports_equipment_lbl->setObjectName(QString::fromUtf8("sports_equipment_lbl"));
        sports_equipment_lbl->setFont(font);
        sports_equipment_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        sports_equipment_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(sports_equipment_lbl, 1, 4, 1, 1);

        clothing_lbl = new QLabel(page);
        clothing_lbl->setObjectName(QString::fromUtf8("clothing_lbl"));
        clothing_lbl->setFont(font);
        clothing_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        clothing_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(clothing_lbl, 0, 1, 1, 1);

        candy_lbl_2 = new QLabel(page);
        candy_lbl_2->setObjectName(QString::fromUtf8("candy_lbl_2"));
        candy_lbl_2->setFont(font);
        candy_lbl_2->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        candy_lbl_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(candy_lbl_2, 0, 4, 1, 1);

        food_lbl_2 = new QLabel(page);
        food_lbl_2->setObjectName(QString::fromUtf8("food_lbl_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(16);
        food_lbl_2->setFont(font1);
        food_lbl_2->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        food_lbl_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(food_lbl_2, 0, 2, 1, 1);

        domestic_imblements_lbl = new QLabel(page);
        domestic_imblements_lbl->setObjectName(QString::fromUtf8("domestic_imblements_lbl"));
        domestic_imblements_lbl->setFont(font);
        domestic_imblements_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        domestic_imblements_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(domestic_imblements_lbl, 1, 2, 1, 1);

        leather_goods_lbl = new QLabel(page);
        leather_goods_lbl->setObjectName(QString::fromUtf8("leather_goods_lbl"));
        leather_goods_lbl->setFont(font);
        leather_goods_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        leather_goods_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(leather_goods_lbl, 2, 2, 1, 1);

        furnitura_lbl = new QLabel(page);
        furnitura_lbl->setObjectName(QString::fromUtf8("furnitura_lbl"));
        furnitura_lbl->setFont(font);
        furnitura_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        furnitura_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(furnitura_lbl, 0, 0, 1, 1);

        electronics_lbl = new QLabel(page);
        electronics_lbl->setObjectName(QString::fromUtf8("electronics_lbl"));
        electronics_lbl->setFont(font);
        electronics_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        electronics_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(electronics_lbl, 1, 1, 1, 1);

        toiletry_lbl = new QLabel(page);
        toiletry_lbl->setObjectName(QString::fromUtf8("toiletry_lbl"));
        toiletry_lbl->setFont(font);
        toiletry_lbl->setStyleSheet(QString::fromUtf8(" border-radius: 10px; background:rgb(170, 120, 170); color: #4A0C46;\n"
"border-color:red;\n"
"border: 5px solid rgb(85, 85, 255);"));
        toiletry_lbl->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(toiletry_lbl, 2, 1, 1, 1);

        stackedWidget->addWidget(page);
        Vegetbales_page = new QWidget();
        Vegetbales_page->setObjectName(QString::fromUtf8("Vegetbales_page"));
        stackedWidget->addWidget(Vegetbales_page);
        Candy_page = new QWidget();
        Candy_page->setObjectName(QString::fromUtf8("Candy_page"));
        stackedWidget->addWidget(Candy_page);
        Clothes_page = new QWidget();
        Clothes_page->setObjectName(QString::fromUtf8("Clothes_page"));
        gridLayout = new QGridLayout(Clothes_page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Clothes_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(Clothes_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(Clothes_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        stackedWidget->addWidget(Clothes_page);
        POS_MAIN_WINDOW->setCentralWidget(centralwidget);
        widget_3->raise();
        label->raise();
        tableView->raise();
        lineEdit->raise();
        search_lbl->raise();
        topWidget->raise();
        widget->raise();
        stackedWidget->raise();
        statusbar = new QStatusBar(POS_MAIN_WINDOW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        POS_MAIN_WINDOW->setStatusBar(statusbar);
        menubar = new QMenuBar(POS_MAIN_WINDOW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1368, 21));
        POS_MAIN_WINDOW->setMenuBar(menubar);
        toolBar = new QToolBar(POS_MAIN_WINDOW);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        POS_MAIN_WINDOW->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(POS_MAIN_WINDOW);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(POS_MAIN_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *POS_MAIN_WINDOW)
    {
        POS_MAIN_WINDOW->setWindowTitle(QApplication::translate("POS_MAIN_WINDOW", "POS_MAIN_WINDOW", nullptr));
        refaund_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Refaund", nullptr));
        setings_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Setings", nullptr));
        refreshdata_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Refresh Data", nullptr));
        getcash_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Get Cash", nullptr));
        close_shift_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Close Shift", nullptr));
        topMenu_btn->setText(QApplication::translate("POS_MAIN_WINDOW", "Show", nullptr));
        label->setText(QString());
        lineEdit->setText(QString());
        search_lbl->setText(QString());
        care_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "<html><head/><body><p>Personal</p><p> care</p></body></html>", nullptr));
        toys_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Toys", nullptr));
        baby_prod_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Baby ", nullptr));
        sports_equipment_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Sport", nullptr));
        clothing_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Clothes", nullptr));
        candy_lbl_2->setText(QApplication::translate("POS_MAIN_WINDOW", "Candy", nullptr));
#ifndef QT_NO_WHATSTHIS
        food_lbl_2->setWhatsThis(QApplication::translate("POS_MAIN_WINDOW", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">dsdds</span></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        food_lbl_2->setText(QApplication::translate("POS_MAIN_WINDOW", "Food", nullptr));
        domestic_imblements_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Domestic", nullptr));
        leather_goods_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Leather", nullptr));
        furnitura_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Furnitura", nullptr));
        electronics_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Electronics", nullptr));
        toiletry_lbl->setText(QApplication::translate("POS_MAIN_WINDOW", "Toiletry", nullptr));
        label_3->setText(QApplication::translate("POS_MAIN_WINDOW", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("POS_MAIN_WINDOW", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("POS_MAIN_WINDOW", "TextLabel", nullptr));
        toolBar->setWindowTitle(QApplication::translate("POS_MAIN_WINDOW", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class POS_MAIN_WINDOW: public Ui_POS_MAIN_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POS_MAIN_WINDOW_H
