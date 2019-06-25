/* 
咖啡因饮料基类
 */

#if !defined(CAFFEINEBEVERAGE)
#define CAFFEINEBEVERAGE

#include<iostream>

using namespace std;

class CaffeineBeverage
{
private:
    //虚函数可以定义为私有，子类还是能重载，只是不能通过类对象调用了
    virtual void add_condiment(){
        cout<<"不加调料"<<endl;
    }
    //钩子
    virtual bool add_sugar(){
        return false;
    }
    void boil_water(){
        cout<<"烧水"<<endl;
    }
    
    void putin_cup(){
        cout<<"倒入杯中"<<endl;
    }
public:
    //加了const，子类不能override父类
    void make_beverage(){
        boil_water();
        add_condiment();
        if(add_sugar()){
            cout<<"加糖"<<endl;
        }
        putin_cup();
    }
    
    virtual ~CaffeineBeverage(){}
};



#endif // CAFFEINEBEVERAGE
