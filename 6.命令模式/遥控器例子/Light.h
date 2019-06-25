/* 
灯
 */
#if !defined(LIGHT)
#define LIGHT

#include<iostream>

using namespace std;

class Light
{
private:
    /* data */
public:
    void on(){
        cout<<"灯打开了"<<endl;
    }
    void off(){
        cout<<"灯关了"<<endl;
    }
};


#endif // LIGHT
