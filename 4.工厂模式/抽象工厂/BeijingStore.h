/* 
北京的Pizza店 
create_pizza()方法，可以判断产生不同的子类（不同种类的Pizza），为了简单就只写了这一个
*/

#ifndef BEIJINGSTORE
#define BEIJINGSTORE

#include"PizzaStore.h"
#include"BeijingPizza.h"

class BeijingStore:public PizzaStore
{
private:
    /* data */
    MaterialFactory* mf;
public:
    BeijingStore(MaterialFactory* mf){
        this->mf=mf;
    }
    Pizza* create_pizza(string type) override{
        return new BeijingPizza(mf);
        //这里可以判断产生不同的子类，为了简单就只写了这一个
    }
};


#endif