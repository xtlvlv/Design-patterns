/* 
糖果游戏机
 */
#if !defined(GAMEMACHINE)
#define GAMEMACHINE

#include"State.h"
#include"SoldState.h"
#include"SoldOutState.h"
#include"HasQuarterState.h"
#include"NoQuarterState.h"
#include<iostream>

using namespace std;

class CandyGameMachine
{
public: //为了不写get方法，所以定义为public，方便
    int num=0;  //糖果数量
    State* sold_state;
    State* soldout_state;
    State* has_quarter_state;
    State* no_quarter_state;
    State* cur_state;

    CandyGameMachine(int num){
        this->num=num;
        init();
    }
    void init(){
        sold_state=new SoldState();
        soldout_state=new SoldOutState();
        has_quarter_state=new HasQuarterState();
        no_quarter_state=new NoQuarterState();
        if(num>0){
            cur_state=no_quarter_state;
        }
    }
    void insert_quarter(){
        cur_state->insert_quarter();
    }
    void eject_quarter(){
        cur_state->eject_quater();
    }
    void turn_crank(){
        cur_state->turn_crank();
        cur_state->dispense();
    }
    void set_state(State* s){
        cur_state=s;
    }
    void release_candy(){
        if(num>0){
            num--;
        }
        if(num==0){
            cur_state=soldout_state;
        }
    }
};

#endif // GAMEMACHINE
