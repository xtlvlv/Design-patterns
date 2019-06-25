#ifndef BEVERAGE
#define BEVERAGE

#include<iostream>
#include<string>

class Beverage{
public: //为了方便调用，把变量设置成public
    std::string desc="饮料";
    double cost=0;
    virtual double cost_total(){
        return 0;
    };
    virtual void get_description(){
        std::cout<<desc<<std::endl;        
    }
    virtual ~Beverage(){}
};

#endif