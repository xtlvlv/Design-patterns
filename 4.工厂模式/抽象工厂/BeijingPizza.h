/* 第一种地区的Pizza */

#ifndef BeijingPIZZA
#define BeijingPIZZA

#include"Pizza.h"
#include<iostream>
#include"MaterialFactory.h"

using namespace std;

class BeijingPizza:public Pizza
{
private:
    /* data */
    MaterialFactory* mf;
public:
    BeijingPizza(MaterialFactory* mf){
        this->name="北京";
        this->mf=mf;
    }
    void prepare() override{
        this->cheese=mf->create_cheese();
        cout<<"准备了 "+name+" pizza,使用了 "+cheese<<endl;
    }
};

#endif