#include "db_connector.h"

Db_Connector::Db_Connector()
{

}

bool Db_Connector::DbConect(QString adress)
{
    QSqlDatabase dsb = QSqlDatabase::addDatabase( "QSQLITE" );
     dsb.setDatabaseName( adress );
     return dsb.open();
}


