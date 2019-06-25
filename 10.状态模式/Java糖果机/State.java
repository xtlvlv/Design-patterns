/* 
状态接口
 */

public interface State
{
    public abstract void insert_quarter();
    public abstract void eject_quater();
    public abstract void turn_crank();
    public abstract void dispense();
};

