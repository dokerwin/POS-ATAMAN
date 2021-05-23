#ifndef POS_MAIN_WINDOW_H
#define POS_MAIN_WINDOW_H

#include "dbhandler.h"

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class POS_MAIN_WINDOW; }
QT_END_NAMESPACE

class TestModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    TestModel(QObject *parent = 0);

    void populateData(const QList<QString> &contactName,const QList<QString> &contactPhone);

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

    void initTable();

private:
    QList<QString> tm_contact_name;
    QList<QString> tm_contact_phone;

};




class POS_MAIN_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    POS_MAIN_WINDOW(QWidget *parent = nullptr);
    ~POS_MAIN_WINDOW();





private slots:
    void on_pushButton_2_clicked();
    void on_topMenu_btn_clicked();
    void on_tableView_readonly_activated(const QModelIndex &index);

    void on_Clothes_btn_clicked();

private:
    void initTableModel();
    void initCategories();
    void initTable(std::string table);
    void initButton();
    void hideHeaderWidget();
    void showHeaderWidget();

    void setBackGroud();
    Db_Connector db;
    Ui::POS_MAIN_WINDOW *ui;
};
#endif // POS_MAIN_WINDOW_H
