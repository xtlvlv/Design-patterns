/* 
没有硬币的状态
 */

#if !defined(NOQUARTER)
#define NOQUARTER

#include"CandyGameMachine.h"
#include"State.h"

using namespace std;

class NoQuarterState:public State
{

public:
    NoQuarterState(){
        machine=nullptr;
    }
    NoQuarterState(CandyGameMachine* m){
        machine=m;
    }
    void insert_quarter() override{
        cout<<"您投入了一枚硬币"<<endl;
        machine->set_state(machine->has_quarter_state);
    }
    void eject_quater() override{
        cout<<"您还没有投入硬币"<<endl;
    }
    void turn_crank() override{
        cout<<"请投入硬币"<<endl;
    }
    void dispense() override{
        cout<<"请投入硬币"<<endl;        
    }
   
};

#endif // NOQUARTER
