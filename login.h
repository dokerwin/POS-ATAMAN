#ifndef LOGIN_H
#define LOGIN_H
#include "dbhandler.h"
#include "user.h"
#include "usermodel.h"

#include <QDialog>
#include <QMessageBox>
#include "pos_main_window.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_login_btn_clicked();

private:

 bool check_user(std::string login,std::string password);

 void confirm();


    User us;
    UserContoller uc;
    Ui::Login *ui;
    Db_Connector db;
    QMessageBox msgBox;

   POS_MAIN_WINDOW w;




};

#endif // LOGIN_H
