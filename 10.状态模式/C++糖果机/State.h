/* 
状态接口
 */

#if !defined(MYSTATE)
#define MYSTATE

#include"CandyGameMachine.h"

class State
{
protected:
    CandyGameMachine* machine;
public:
    virtual void insert_quarter()=0;
    virtual void eject_quater()=0;
    virtual void turn_crank()=0;
    virtual void dispense()=0;
};


#endif // MYSTATE
