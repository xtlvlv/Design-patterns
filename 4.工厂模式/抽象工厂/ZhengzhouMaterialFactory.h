#ifndef ZZMF
#define ZZMF

#include"MaterialFactory.h"

class ZhengzhouMaterialFactory:public MaterialFactory
{
private:
    /* data */
public:
    std::string create_cheese(){
        return "zz-cheese";
    }
};


#endif