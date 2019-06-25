/* 
模拟客户在Pizza店点餐
 */

#include<iostream>
#include"PizzaStore.h"



using namespace std;

int main(){

    PizzaStore* store=new PizzaStore();
    store->order_pizza("Beijing");
    store->order_pizza("Zhengzhou");
    store->order_pizza("Beijing");

    return 0;
}