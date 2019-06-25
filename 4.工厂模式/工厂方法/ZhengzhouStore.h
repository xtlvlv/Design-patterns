/* 
郑州的Pizza店 
create_pizza()方法，可以判断产生不同的子类（不同种类的Pizza），为了简单就只写了这一个
*/

#ifndef ZHENGZHOUSTORE
#define ZHENGZHOUSTORE

#include"PizzaStore.h"
#include"ZhengzhouPizza.h"

class ZhengzhouStore:public PizzaStore
{
private:
    /* data */
public:
    Pizza* create_pizza(string type) override{
        return new ZhengzhouPizza();
        //这里可以判断产生不同的子类，为了简单就只写了这一个
    }
};



#endif