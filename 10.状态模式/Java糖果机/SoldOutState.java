/* 
机器里的糖果售完的状态
 */
public class SoldOutState implements State
{
    private CandyGameMachine machine;
    public SoldOutState(){
        machine=null;
    }
    public SoldOutState(CandyGameMachine m){
        machine=m;
    }
    @Override
    public void insert_quarter(){
        System.out.println("抱歉，糖果已经卖完了");
    }
    @Override
    public void eject_quater(){
        System.out.println("您未投币，而且糖果已经卖完了");
    }
    @Override
    public void turn_crank(){
        System.out.println("您未投币，而且糖果已经卖完了");
    }
    @Override
    public void dispense(){
        System.out.println("抱歉，糖果已经卖完了");
    }
};