#include "user.h"

std::string User::getName() const
{
    return name;
}

void User::setName(const std::string &value)
{
    name = value;
}

std::string User::getLogin() const
{
    return login;
}

void User::setLogin(const std::string &value)
{
    login = value;
}

std::string User::getPassword() const
{
    return password;
}

void User::setPassword(const std::string &value)
{
    password = value;
}



void User::setID(int id)
{
    ID = id;
}

int User::getID() const
{
    return ID;
}

User& User::operator = (const User &a)
{
   name = a.getName();
   login = a.getLogin();
   password = a.getPassword();

   return * this;
}



User::User()
{

}

