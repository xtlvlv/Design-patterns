/* 
定义原料工厂
    Pizza可以由不同的原料产生
 */

#ifndef MATERIALFACTORY
#define MATERIALFACTORY

#include<iostream>

class MaterialFactory
{
private:
    /* data */
public:

    virtual std::string create_cheese()=0;

};



#endif