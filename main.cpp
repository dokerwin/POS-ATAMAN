#include "pos_main_window.h"
#include "login.h"
#include "internethandler.h"
#include <QApplication>
#include <iostream>





int main(int argc, char *argv[])
{

qDebug() << "Current dir:" << QDir::currentPath();
    QApplication a(argc, argv);
   POS_MAIN_WINDOW w;
    //Login w;
    w.show();

    return a.exec();
}
