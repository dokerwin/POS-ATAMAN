#include "usermodel.h"
#include "user.h"



bool UserContoller::create(User &)
{
    return false;
}

User UserContoller::read(const User &s )
{
     return  s;
}

User UserContoller::read(int index)
{   User s;
    return  s;
}

bool UserContoller::read(const std::string login, const std::string password)
{


    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT LOGIN,PASSWORD FROM Users WHERE LOGIN = (:LOGIN)");
    checkQuery.bindValue(":LOGIN", QString::fromStdString(login));
    if (checkQuery.exec())
    {

        if (checkQuery.next())
            return checkhash(checkQuery.value(1).toString().toStdString(), password);
        else
            return false;

    }

    else
        return false;
}

bool UserContoller::update(int index)
{
    return false;
}

bool UserContoller::update(User &a)
{
      return false;
}

bool UserContoller::remove(User &)
{
      return false;
}

bool UserContoller::remove(int index)
{
      return false;
}

bool UserContoller::isExist(User &)
{  return false;
}

bool UserContoller::isExist(int)
{
    return false;
}

std::string UserContoller::sethash(std::string tohash)
{
    return bcrypt::generateHash(tohash);
}

bool UserContoller::checkhash(std::string hash, std::string password)
{
  return bcrypt::validatePassword(password,hash);
}



UserContoller::UserContoller()
{

}
