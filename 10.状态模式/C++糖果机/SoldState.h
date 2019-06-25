/* 
转动手柄后，处于正在售出的状态
 */

#if !defined(SOLDSTATE)
#define SOLDSTATE

#include"CandyGameMachine.h"
#include"State.h"

using namespace std;

class SoldState:public State
{

public:
    SoldState(){
        machine=nullptr;
    }
    SoldState(CandyGameMachine* m){
        machine=m;
    }
    void insert_quarter() override{
        std::cout<<"正在出货中。。。"<<endl;
    }
    void eject_quater() override{
        cout<<"正在出货中。。。"<<endl;
    }
    void turn_crank() override{
        cout<<"正在出货中。。。"<<endl;
    }
    void dispense() override{
        machine->release_candy();
        cout<<"您获得一个糖果"<<endl;
    }
   
};

#endif // SOLDSTATE
