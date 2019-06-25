/* Pizza接口 */

#ifndef PIZZA
#define PIZZA

#include<iostream>

using namespace std;

class Pizza
{
protected:
    string name;
    
public:
    
    virtual void prepare(){
        cout<<"准备 "+name+" Pizza"<<endl;
    }
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