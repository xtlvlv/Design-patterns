/* Pizza店，制作Pizza */

#ifndef PIZZASTORE
#define PIZZASTORE

#include<iostream>
#include"Pizza.h"

using namespace std;

class PizzaStore
{
private:
    
public:
    PizzaStore(){
        
    }
    void order_pizza(string type){
        Pizza* pizza=create_pizza(type);
        pizza->prepare();
        pizza->cut();
        pizza->box();
    }
    virtual Pizza* create_pizza(string type)=0;
    ~PizzaStore(){
        
    }
};


#endif
