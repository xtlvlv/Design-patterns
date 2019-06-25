/* Pizza工厂，产生不同地区(或其他因素)的Pizza */

#ifndef SIMPLEPIZZA
#define SIMPLEPIZZA

#include"BeijingPizza.h"
#include"ZhengzhouPizza.h"
#include<iostream>

using namespace std;

class SimplePizzaFactory
{
private:
    /* data */
public:
    Pizza* create_pizza(string type){
        if(type=="Beijing"){
            return new BeijingPizza();
        }else if(type=="Zhengzhou"){
            return new ZhengzhouPizza();
        }else{
            return new ZhengzhouPizza();
        }
    }
};




#endif