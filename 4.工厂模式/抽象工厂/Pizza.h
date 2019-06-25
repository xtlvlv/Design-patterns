/* Pizza接口 */

#ifndef PIZZA
#define PIZZA

#include<iostream>

using namespace std;

class Pizza
{
protected:
    string name;
    string cheese;  //cheese本来是个类，这里用string简化
public:
    
    virtual void prepare()=0;
    virtual void cut(){
        cout<<"切 "+name+" Pizza"<<endl;
    }
    virtual void box(){
        cout<<"装盒 "+name+" Pizza"<<endl;
    }
    virtual ~Pizza(){
        
    }
};
#endif