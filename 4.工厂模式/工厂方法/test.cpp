/* 
模拟客户在Pizza店点餐
 */

#include<iostream>
#include"PizzaStore.h"
#include"BeijingStore.h"
#include"ZhengzhouStore.h"

using namespace std;

int main(){

    PizzaStore* store=new BeijingStore();
    PizzaStore* s2=new ZhengzhouStore();
    store->order_pizza("这里没有判断");
    s2->order_pizza("真个参数无用");

    return 0;
}