#include "login.h"
#include "ui_login.h"

#include "mylabel.h"


Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


    myLabel* m_label = new myLabel(this);

    m_label->setStyleSheet("background-color: #222222;");
    m_label->setGeometry(120, 20, 150, 30);
    m_label->setText("sdsdsd");
    m_label->show();




    myLabel* m_label1 = new myLabel(this);

    m_label1->setStyleSheet("background-color: #222222;");
    m_label1->setGeometry(12, 110, 150, 30);
    m_label1->setText("sdsdsd");
    m_label1->show();







db.DbConect("C:/POS_DB/Pos.db");

}


Login::~Login()
{
    delete ui;
}

void Login::on_login_btn_clicked()
{

    check_user(ui->login_line->text().toStdString(), ui->pasword_line->text().toStdString());



}

bool Login::check_user(std::string login,std::string password)
{
  if (uc.read(login,password))
  {
     confirm();
     return true;
  }

}

void Login::confirm()
{


    msgBox.setInformativeText("Do you want to start your work shift??");

    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    int ret = msgBox.exec();
    switch (ret) {
      case QMessageBox::Yes:{

        this->close();
        w.show();
    }
      case QMessageBox::No:

          break;

      default:

          break;

}
}
