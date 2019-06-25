#ifndef DUCK
#define DUCK
#include<iostream>
#include"behavior.h"

class Duck
{
protected:
    FlyBehavior* fly;    //纯虚函数就不能创建对象，加=0就是纯虚函数,但用指针就可以。。。
    QuackBehavior* quack;
public:
    
    virtual void display()=0;
    
    void swim(){
        std::cout<<"每种鸭子都能游泳"<<std::endl;
    }
    void perform_quack(){
        quack->quack();
    }
    void perform_fly(){
        fly->fly();
    }
    void set_fly_behavior(FlyBehavior* fb){
        fly=fb;
    }
    void set_quack_behavior(QuackBehavior* qb){
        quack=qb;
    }
    virtual ~Duck(){    //虚基类要声明虚析构
        if(fly!=NULL){
            delete fly;
        }
        if(quack!=NULL){
            delete quack;
        }
    }
};


//红头鸭，能飞能叫
class RedHeadDuck:public Duck
{
private:
    
public:
    RedHeadDuck(){
        fly=new FlyWithWings(); //能飞
        quack=new Quack();  //能叫
    }
    void display() override{
        std::cout<<"我是个红头鸭"<<std::endl;
        perform_fly();
        perform_quack();
    }

};

class ToyDuck:public Duck   //一定要注明public继承，不然的话不让基类转换为子类
{
private:
    
public:
    ToyDuck(){
        fly=new FlyNoWay(); //不能飞
        quack=new Quack();  //能叫
    }
    void display() override{
        std::cout<<"我是个玩具鸭"<<std::endl;
        perform_fly();
        perform_quack();
    }
};

#endif

