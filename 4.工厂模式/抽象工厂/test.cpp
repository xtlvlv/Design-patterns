/* 
模拟客户在Pizza店点餐
 */

#include<iostream>
#include"PizzaStore.h"
#include"BeijingStore.h"
#include"ZhengzhouStore.h"
#include"ZhengzhouMaterialFactory.h"
#include"BeijingMaterialFactory.h"

using namespace std;

int main(){
    MaterialFactory* zzmf=new ZhengzhouMaterialFactory();
    MaterialFactory* bjmf=new BeijingMaterialFactory();

    PizzaStore* store=new BeijingStore(zzmf);
    PizzaStore* s2=new BeijingStore(bjmf);
    store->order_pizza("这里没有判断");
    s2->order_pizza("真个参数无用");

    return 0;
}