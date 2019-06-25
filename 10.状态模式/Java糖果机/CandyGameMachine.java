/* 
糖果游戏机
 */

public class CandyGameMachine
{
    int num=0;  //糖果数量
    public State sold_state;
    public State soldout_state;
    public State has_quarter_state;
    public State no_quarter_state;
    public State cur_state;

    public CandyGameMachine(int num){
        this.num=num;
        init();
    }
    void init(){
        sold_state=new SoldState(this);
        soldout_state=new SoldOutState(this);
        has_quarter_state=new HasQuarterState(this);
        no_quarter_state=new NoQuarterState(this);
        if(num>0){
            cur_state=no_quarter_state;
        }
    }
    public void insert_quarter(){
        cur_state.insert_quarter();
    }
    public void eject_quarter(){
        cur_state.eject_quater();
    }
    public void turn_crank(){
        cur_state.turn_crank();
        cur_state.dispense();
    }
    public void set_state(State s){
        cur_state=s;
    }
    public void release_candy(){
        if(num>0){
            num--;
        }
    }
};

