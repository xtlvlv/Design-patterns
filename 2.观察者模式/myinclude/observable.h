#ifndef OBSERVABLE
#define OBSERVABLE
#include"observer.h"

class Observable{
protected:
    bool changed=false; //用changed变量可以控制通知改变的时期，比如温度变化超过0.5才通知
public:
    virtual void regist(Observer*)=0;
    virtual void remove(Observer*)=0;
    virtual void notify()=0;
    void set_changed(){
        changed=true;
    }
    virtual ~Observable(){}
};

#endif