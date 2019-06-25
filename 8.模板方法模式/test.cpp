#include<iostream>
#include"BeijingTea.h"

using namespace std;

int main(){

    CaffeineBeverage* b_tea=new BeijingTea();

    b_tea->make_beverage();
    
    return 0;
}