#ifndef COFFEE
#define COFFEE

#include"./Beverage.h"

class Coffee:public Beverage
{

public:
    Coffee(Beverage* b){
        this->cost=5+b->cost;
        this->desc=b->desc+" 咖啡";
    }
    void get_description(){
        std::cout<<desc<<std::endl;
    }
    double cost_total() override;
};

#endif