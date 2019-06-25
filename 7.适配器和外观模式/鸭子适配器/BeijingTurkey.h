/* 
火鸡中的一种
 */

#if !defined(BEIJINGTURKEY)
#define BEIJINGTURKEY

#include<iostream>
#include"Turkey.h"

using namespace std;

class BeijingTurkey:public Turkey
{
private:
   
public:
    void gobble() override{
        cout<<"咕咕叫"<<endl;
    }
    void fly() override{
        cout<<"飞了 1m"<<endl;
    }

};

#endif // BEIJINGTURKEY
