#include"../myinclude/Coffee.h"
#include"../myinclude/Suger.h"

#include<iostream>

using namespace std;

int main(){
    Beverage* b=new Coffee(new Beverage());
    Beverage* b2=new Suger(b);
    b2->get_description();
    cout<<b2->cost_total()<<endl;
    return 0;
}