/* 
转动手柄后，处于正在售出的状态
 */

public class SoldState implements State
{
    private CandyGameMachine machine;
    public SoldState(){
        machine=null;
    }
    public SoldState(CandyGameMachine m){
        machine=m;
    }
    @Override
    public void insert_quarter(){
        System.out.println("正在出货中。。。请不要投硬币");
    }
    @Override
    public void eject_quater(){
        System.out.println("正在出货中。。。");
    }
    @Override
    public void turn_crank(){
        System.out.println("正在出货中。。。");
    }
    @Override
    public void dispense(){
        machine.release_candy();
        System.out.println("您获得一个糖果");
        machine.set_state(machine.no_quarter_state);
    }
};


