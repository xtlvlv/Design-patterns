#include"TurkeyAdapter.h"
#include"BeijingTurkey.h"
#include<iostream>

using namespace std;

int main(){
    Turkey* t=new BeijingTurkey();
    TurkeyAdapter* TA=new TurkeyAdapter(t);
    TA->quack();
    TA->fly();
    
    return 0;
}