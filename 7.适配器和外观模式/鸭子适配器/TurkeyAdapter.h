/* 
火鸡冒充鸭子
 */

#if !defined(TURKEYADAPTER)
#define TURKEYADAPTER

#include"Turkey.h"
#include"Duck.h"

class TurkeyAdapter:public Duck
{
private:
    Turkey* turkey;
public:
    TurkeyAdapter(Turkey* t){
        turkey=t;
    }
    void quack() override{
        turkey->gobble();
    }
    //鸭子一次能飞3m,火鸡只能1m，所以让火鸡非3次
    void fly() override{
        for(int i=0;i<3;++i){
            turkey->fly();
        }
    }
};


#endif // TURKEYADAPTER
