/* 
机器里有硬币的状态
 */

public class HasQuarterState implements State
{
    private CandyGameMachine machine;
    
    public HasQuarterState(CandyGameMachine m){
        machine=m;
    }
    @Override
    public void insert_quarter(){
        System.out.println("您已经投入硬币,请转动手柄");
    }
    @Override
    public void eject_quater(){
        System.out.println("您的硬币已弹出");
        machine.set_state(machine.no_quarter_state);
    }
    @Override
    public void turn_crank(){
        if(machine.num<=0){
            // System.out.println("抱歉，糖果已经卖完了");
            eject_quater();
            machine.cur_state=machine.soldout_state;
            return;
        }
        System.out.println("请稍等。。。");
        machine.set_state(machine.sold_state);
    }
    @Override
    public void dispense(){
        System.out.println("请转动手柄");
    }
};
