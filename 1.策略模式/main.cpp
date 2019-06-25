#include<iostream>
#include"./myinclude/duck.h"

using namespace std;

int main(){

    Duck* d1=new RedHeadDuck(); //一定要注明public继承，不然的话不让转换
    d1->display();
    ToyDuck* d2=new ToyDuck();
    d2->display();
    return 0;
}