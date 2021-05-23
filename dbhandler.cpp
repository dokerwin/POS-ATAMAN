#pragma once
#include "dbhandler.h"
#include<QDebug>
#include<QSqlQuery>




DBhandler::DBhandler()
{

}

DBhandler DBhandler::getDbHandler()
{
    static Destroyer destr;
    static DBhandler *dbhl = nullptr;
    if(!dbhl)
    {
        dbhl = new DBhandler();
        destr.set(dbhl);
    }

    return *dbhl;
}

bool DBhandler::logIn()
{




return true;
}




DBhandler::Destroyer::Destroyer(){
    p = nullptr;
}
DBhandler::Destroyer::~Destroyer(){
    if(p)delete p;
}
void DBhandler::Destroyer::set(DBhandler* p) noexcept(false){
    if (p)
        return;

    this->p = p;
}






