/* Pizza店，制作Pizza */

#ifndef PIZZASTORE
#define PIZZASTORE

#include"OnePizza.h"
#include"TwoPizza.h"
#include"SimplePizzaFactory.h"
#include<iostream>

using namespace std;

class PizzaStore
{
private:
    SimplePizzaFactory* factory;
public:
    PizzaStore(){
        factory=new SimplePizzaFactory();
    }
    void order_pizza(string type){
        Pizza* pizza=factory->create_pizza(type);
        pizza->prepare();
        pizza->cut();
        pizza->box();
    }
    ~PizzaStore(){
        delete factory;
        factory=NULL;
    }
};


#endif
