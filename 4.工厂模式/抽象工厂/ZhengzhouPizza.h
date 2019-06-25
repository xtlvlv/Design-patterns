/* 第二种地区的Pizza */

#ifndef ZhengzhouPIZZA
#define ZhengzhouPIZZA

#include"Pizza.h"
#include<iostream>
#include"MaterialFactory.h"

using namespace std;

class ZhengzhouPizza:public Pizza
{
private:
    /* data */
    MaterialFactory* mf;
public:
    ZhengzhouPizza(MaterialFactory* mf){
        this->name="郑州";
        this->mf=mf;
    }
    void prepare() override{
        this->cheese=mf->create_cheese();
        cout<<"准备了 "+name+" pizza,使用了 "+cheese<<endl;
    }
};

#endif