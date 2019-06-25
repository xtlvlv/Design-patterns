/* 第一种地区的Pizza */

#ifndef BeijingPIZZA
#define BeijingPIZZA

#include"Pizza.h"
#include<iostream>

using namespace std;

class BeijingPizza:public Pizza
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"准备北京Pizza!"<<endl;
    }
    void cut() override{
        cout<<"切北京Pizza!"<<endl;
    }
    void box() override{
        cout<<"装盒北京Pizza!"<<endl;
    }
};

#endif