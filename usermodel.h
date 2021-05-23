#ifndef USERMODEL_H
#define USERMODEL_H

#include "IController.h"
#include "dbhandler.h"
class User;

class UserContoller : public IController<User>
{
public:

    bool create            (User &) override;
    User read              (const User &) override;
    User read              (int index) override;
    bool read              (const std::string, const std::string);
    bool update            (int index) override;
    bool update            (User & a) override;
    bool remove            (User&)override;
    bool remove            (int index)override;
    bool isExist           (User &) override;
    bool isExist           (int) override;
    bool isEmpty           ();



   std::string sethash(std::string hash);
    bool checkhash(std::string hash, std::string password);



    UserContoller();
};

#endif // USERMODEL_H
