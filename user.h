#ifndef USER_H
#define USER_H
#include<string>




/*
class BaseTabelInterface
{
public:
    virtual bool isValid() = 0;
};
*/

class User
{
private:

    int ID;
    std::string name;
    std::string login;
    std::string password;

public:


    User();
    std::string getName() const;
    void setName(const std::string &value);
    std::string getLogin() const;
    void setLogin(const std::string &value);
    std::string getPassword() const;
    void setPassword(const std::string &value);
    void setID(int id);
    int getID() const;
    User & operator= (const User &a);



};

#endif // USER_H
