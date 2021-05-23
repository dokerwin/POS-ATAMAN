#ifndef DBHANDLER_H
#define DBHANDLER_H
#pragma once
#include "db_connector.h"
#include"Bcrypt.cpp-master/include/bcrypt.h"

class DBhandler
{
private:
     DBhandler();
    class Destroyer
    {
    private:
        DBhandler * p;
    public:
        void set(DBhandler *p) noexcept(false);
        ~Destroyer();
        Destroyer();
    };



   public:
        static  DBhandler getDbHandler();
         bool logIn();
};





#endif // DBHANDLER_H
