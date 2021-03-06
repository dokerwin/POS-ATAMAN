#include "pos_main_window.h"
#include "ui_pos_main_window.h"
#include "mylabel.h"

#include<QLabel>
#include<QScrollArea>

POS_MAIN_WINDOW::POS_MAIN_WINDOW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::POS_MAIN_WINDOW)
{





    this->setFixedSize(1262,900);
    db.DbConect("C:/POS_DB/Pos.db");
    ui->setupUi(this);
    setBackGroud();
    hideHeaderWidget();
    initButton();
    initTable("sss");
    initCategories();
    initTableModel();






    //ui->textEdit->setText("sss");
  //  ui->textEdit->append("\n");
    //ui->textEdit->append("sss");

}

POS_MAIN_WINDOW::~POS_MAIN_WINDOW()
{
    delete ui;
}


void POS_MAIN_WINDOW::on_pushButton_2_clicked()
{
    this->close();
}

void POS_MAIN_WINDOW::hideHeaderWidget()
{

    QPropertyAnimation *animation = new QPropertyAnimation(ui->topWidget, "geometry");
    animation->setDuration(300);
    animation->setStartValue(QRect(0, 0,  1261, 191));
    animation->setEndValue(QRect(0, -160,  1261, 191));
    animation->start();

}

void POS_MAIN_WINDOW::showHeaderWidget()
{

    QPropertyAnimation *animation = new QPropertyAnimation(ui->topWidget, "geometry");
        animation->setDuration(300);
        animation->setStartValue(QRect(0,-160, 1261, 191));
        animation->setEndValue(QRect(0, 0,  1261, 191));
        animation->start();

}

void POS_MAIN_WINDOW::setBackGroud()
{
    QPixmap bkgnd("./images/backgroud.png");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
}

void POS_MAIN_WINDOW::on_topMenu_btn_clicked()
{
    if(ui->topWidget->geometry()==(QRect(0, -160,  1261, 191))){
     showHeaderWidget();
}

    else
        hideHeaderWidget();

}


void POS_MAIN_WINDOW::initCategories()
{



    QPixmap search = QPixmap("./images/search.png").scaled( ui->search_lbl->size(),Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->search_lbl->setPixmap(search);



}



void POS_MAIN_WINDOW::initTable(std::string table)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery("select PRODUCT_NAME,LIST_PRICE,BARCODE from Product");
    ui->tableView_readonly->verticalHeader()->hide(); //hide vertical column with number ow row
    ui->tableView_readonly->setSelectionBehavior(QAbstractItemView::SelectRows); //select row
    ui->tableView_readonly->setModel(model);

}

void POS_MAIN_WINDOW::initButton()
{

    ui->topMenu_btn->setStyleSheet(
        "QPushButton {"
            "border: 1px solid #199909;"
            "border-radius: 6px;"
            "background-color: #116a06;"
            "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 0.67, "
               "stop: 0 #22c70d, stop: 1 #116a06);"
        "}"
        "QPushButton:pressed {"
            "border: 1px solid #333333;"
            "background-color: #222222;"
            "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 0.67, "
                "stop: 0 #444444, stop: 1 #222222);"
        "}");



}










//////qmodelview




void POS_MAIN_WINDOW::initTableModel()
{
    QList<QString> contactNames;
        QList<QString> contactPhoneNums;

        QList<QString> price;
            QList<QString> brand;

        // Create some data that is tabular in nature:
        contactNames.append("Thomas");
        contactNames.append("Richard");
        contactNames.append("Harrison");
        contactPhoneNums.append("123-456-7890");
        contactPhoneNums.append("222-333-4444");
        contactPhoneNums.append("333-444-5555");



        // Create model:
        TestModel *PhoneBookModel = new TestModel(this);

        // Populate model with data:
        PhoneBookModel->populateData(contactNames,contactPhoneNums);

        // Connect model to table view:
        ui->tableView->setModel(PhoneBookModel);

        // Make table header visible and display table:
        ui->tableView->horizontalHeader()->setVisible(true);
        ui->tableView->show();
}



TestModel::TestModel(QObject *parent) : QAbstractTableModel(parent)
{
}

// Create a method to populate the model with data:
void TestModel::populateData(const QList<QString> &contactName,const QList<QString> &contactPhone)
{
    tm_contact_name.clear();
    tm_contact_name = contactName;
    tm_contact_phone.clear();
    tm_contact_phone = contactPhone;
    return;
}

int TestModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return tm_contact_name.length();
}

int TestModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 2;
}

QVariant TestModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || role != Qt::DisplayRole) {
        return QVariant();
    }
    if (index.column() == 0) {
        return tm_contact_name[index.row()];
    } else if (index.column() == 1) {
        return tm_contact_phone[index.row()];
    }
    return QVariant();
}

QVariant TestModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        if (section == 0) {
            return QString("Name");
        } else if (section == 1) {
            return QString("Price");
        }

        else if (section == 2) {
                    return QString("FODS");
                }

        else if (section == 3) {
                    return QString("PrDSFce");
                }

    }
    return QVariant();
}

void TestModel::initTable()
{

}









void POS_MAIN_WINDOW::on_tableView_readonly_activated(const QModelIndex &index)
{

     int rowidx = ui->tableView_readonly->selectionModel()->currentIndex().row();

     qDebug()<< ui->tableView_readonly->model()->index(rowidx, 0).data().toString();
     qDebug()<< ui->tableView_readonly->model()->index(rowidx, 1).data().toString();
     qDebug()<< ui->tableView_readonly->model()->index(rowidx, 2).data().toString();
     qDebug()<< ui->tableView_readonly->model()->index(rowidx, 3).data().toString();

     int A = ui->tableView_readonly->model()->columnCount();
     qDebug()<<A;

}



void POS_MAIN_WINDOW::on_Clothes_btn_clicked()
{





}
