#include"HomeCinema.h"
#include<iostream>

using namespace std;

int main(){

    Light* l=new Light();
    Screen* s=new Screen();
    CdPlayer* cd=new CdPlayer();
    HomeCinema* hc=new HomeCinema(l,s,cd);
    cout<<"开始看电影："<<endl;
    hc->play();

    cout<<"不看电影了："<<endl;
    hc->close();
    
    return 0;
}