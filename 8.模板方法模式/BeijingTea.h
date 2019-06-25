/* 
咖啡因饮料的一种子类
 */
#if !defined(TEA)
#define TEA

#include"CaffeineBeverage.h"

class BeijingTea:public CaffeineBeverage
{
private:
    /* data */
public:
    void add_condiment() override{
        cout<<"加入北京茶叶"<<endl;
    }
    bool add_sugar() override{
        return true;
    }
};


#endif // TEA
