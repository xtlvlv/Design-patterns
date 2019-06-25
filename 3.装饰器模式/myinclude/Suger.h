#ifndef SUGER
#define SUGER

#include"./Beverage.h"

class Suger:public Beverage
{

public:
    Suger(Beverage* b){
        this->cost=10+b->cost;
        this->desc=b->desc+" 糖";
    }
    void get_description(){
        std::cout<<desc<<std::endl;
    }
    double cost_total() override;
};

#endif