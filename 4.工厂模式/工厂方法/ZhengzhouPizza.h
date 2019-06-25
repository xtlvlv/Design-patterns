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
    ZhengzhouPizza(){
        this->name="郑州";
    }
};

#endif