#ifndef BEHAVIOR
#define BEHAVIOR
#include<iostream>

class FlyBehavior{
private:

public:
    virtual void fly()=0;  
};

class FlyWithWings:public FlyBehavior{

public:
    void fly(){
        std::cout<<"翅膀飞行"<<std::endl;
    }
};

class FlyNoWay:public FlyBehavior{

public:
    void fly(){
        std::cout<<"不会飞"<<std::endl;
    }
};

class QuackBehavior{
private:

public:
    virtual void quack()=0;
};

class Quack:public QuackBehavior{
public:
    void quack(){
        std::cout<<"呱呱叫"<<std::endl;
    }
};

class MuteQuack:public QuackBehavior{
public:
    void quack(){
        std::cout<<"不会叫"<<std::endl;
    }
};

#endif