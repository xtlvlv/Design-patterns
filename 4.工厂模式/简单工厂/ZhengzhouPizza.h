/* 第二种地区的Pizza */

#ifndef ZhengzhouPIZZA
#define ZhengzhouPIZZA

#include"Pizza.h"
#include<iostream>

using namespace std;

class ZhengzhouPizza:public Pizza
{
private:
    /* data */
public:
    void prepare() override{
        cout<<"准备郑州Pizza!"<<endl;
    }
    void cut() override{
        cout<<"切郑州Pizza!"<<endl;
    }
    void box() override{
        cout<<"装盒郑州Pizza!"<<endl;
    }
};

#endif