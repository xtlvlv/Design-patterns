#include<iostream>
#include"MyCPU.h"

using namespace std;

int main(){

    MyCPU3* c=MyCPU3::getInstance();
    c->calc();
    return 0;
}