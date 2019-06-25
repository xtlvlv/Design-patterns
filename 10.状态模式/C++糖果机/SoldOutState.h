/* 
机器里的糖果售完的状态
 */

#if !defined(SOLDOUT)
#define SOLDOUT

#include"CandyGameMachine.h"
#include"State.h"

using namespace std;

class SoldOutState:public State
{

public:
    SoldOutState(){
        this->machine=nullptr;
    }
    SoldOutState(CandyGameMachine* m){
        this->machine=m;
    }
    void insert_quarter() override{
        cout<<"抱歉，糖果已经卖完了"<<endl;
    }
    void eject_quater() override{
        cout<<"您未投币，而且糖果已经卖完了"<<endl;
    }
    void turn_crank() override{
        cout<<"您未投币，而且糖果已经卖完了"<<endl;
    }
    void dispense() override{
        cout<<"您未投币，而且糖果已经卖完了"<<endl;
    }
   
};

#endif // SOLDOUT
