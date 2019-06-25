/* 
灯打开命令
 */

#if !defined(LIGHTON)
#define LIGHTON

#include"Command.h"
#include"Light.h"

class LightOnCommand:public Command
{
private:
    Light* l;
public:
    LightOnCommand(Light* l){
        this->l=l;
    }
    void execute() override{
        l->on();
    }
};



#endif // LIGHTON
