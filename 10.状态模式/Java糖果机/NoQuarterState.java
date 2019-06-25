/* 
没有硬币的状态
 */

public class NoQuarterState implements State
{
    private CandyGameMachine machine;
    public NoQuarterState(){
        machine=null;
    }
    public NoQuarterState(CandyGameMachine m){
        machine=m;
    }
    @Override
    public void insert_quarter(){
        System.out.println("您投入了一枚硬币,请转动手柄获得糖果");
        machine.set_state(machine.has_quarter_state);
    }
    @Override
    public void eject_quater(){
        System.out.println("您还没有投入硬币");
    }
    @Override
    public void turn_crank(){
        System.out.println("请投入硬币");
    }
    @Override
    public void dispense(){
        System.out.println("请投入硬币");
    }
};