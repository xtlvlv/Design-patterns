/* 
机器里有硬币的状态
 */

#if !defined(HASQUARTER)
#define HASQUARTER

#include"CandyGameMachine.h"
#include"State.h"

using namespace std;

class HasQuarterState:public State
{

public:
    HasQuarterState(){
        machine=nullptr;
    }
    HasQuarterState(CandyGameMachine* m){
        machine=m;
    }
    void insert_quarter() override{
        cout<<"您已经投入硬币,请转动手柄"<<endl;
    }
    void eject_quater() override{
        
        cout<<"您的硬币已弹出"<<endl;
        machine->set_state(machine->no_quarter_state);
    }
    void turn_crank() override{
        cout<<"请稍等。。。"<<endl;
        machine->set_state(machine->sold_state);
    }
    void dispense() override{
        cout<<"请转动手柄"<<endl;
    }
   
};

#endif // HASQUARTER
