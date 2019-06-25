/* 
灯
 */
#if !defined(SCREEN)
#define SCREEN

#include<iostream>

using namespace std;

class Screen
{
private:
    /* data */
public:
    void down(){
        cout<<"幕布降下来了"<<endl;
    }
    void up(){
        cout<<"幕布升上去了"<<endl;
    }
};


#endif // SCREEN
