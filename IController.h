#ifndef ICONTROLLER_H
#define ICONTROLLER_H

template<class T>
class IController
{


public:
    virtual bool create    (T&)=0 ;
    virtual T    read      (int index)=0;
    virtual T    read      (const T&)=0;
    virtual bool update    (int index)=0;
    virtual bool update    (T&)=0;
    virtual bool remove    (T&)=0;
    virtual bool remove    (int index)=0;
    virtual bool isExist   (T&)=0;
    virtual bool isExist   (int)=0;

};




#endif // ICONTROLLER_H
