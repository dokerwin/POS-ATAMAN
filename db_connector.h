#ifndef DBCONECTOR_H
#define DBCONECTOR_H


#include <QtSql>
#include <QString>


class Db_Connector
{
public:
    Db_Connector();


    bool DbConect(QString adress="");
   // DbConector(string, string);

private:
    QSqlDatabase db;

};

#endif // DBCONECTOR_H
