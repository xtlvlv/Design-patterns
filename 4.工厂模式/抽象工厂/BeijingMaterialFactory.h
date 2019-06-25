#ifndef BJMF
#define BJMF

#include"MaterialFactory.h"

class BeijingMaterialFactory:public MaterialFactory
{
private:
    /* data */
public:
    std::string create_cheese(){
        return "bj-cheese";
    }
};


#endif