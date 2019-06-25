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
    BeijingPizza(){
        this->name="北京";
    }
};

#endif