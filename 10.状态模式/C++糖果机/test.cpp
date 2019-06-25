/* 
黑框框模拟糖果机

这个一直编译出错。。。why???!!!!!
报错CandyGameMachine类未声明，why???

 */

#include<iostream>
#include"CandyGameMachine.h"

using namespace std;

int main(){

    cout<<"-------实现状态模式的糖果机------------"<<endl;
    cout<<"1. 投币"<<endl;
    cout<<"2. 退币"<<endl;
    cout<<"3. 转动手柄"<<endl;
    cout<<"0. 退出"<<endl;
    cout<<"请输入你的操作：";
    
    CandyGameMachine* machine=new CandyGameMachine(10);
    int op;
    do{
        
        cin>>op;
        switch (op)
        {
        case 1:
            machine->insert_quarter();
            break;
        case 2:
            machine->eject_quarter();
            break;
        case 3:
            machine->turn_crank();
            break;
        default:
            break;
        }
    }while(op!=0);

    return 0;
}