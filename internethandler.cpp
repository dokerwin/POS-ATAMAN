#include "internethandler.h"

#include<QProcess>
#include<QDebug>

bool InternetHandler::getInternetAccsess()
{

    if(QProcess::execute("ping -n 1 www.google.com") == 0)
    {
           qDebug("Conected to internet");
           return true;
    }
    else
    {
          qDebug("Conected to internet is failed");
          return false;
    }
}
