/* 
灯打开命令
 */

#if !defined(LIGHTOFF)
#define LIGHTOFF

#include"Command.h"
#include"Light.h"

class LightOffCommand:public Command
{
private:
    Light* l;
public:
    LightOffCommand(Light* l){
        this->l=l;
    }
    void execute() override{
        l->off();
    }
};



#endif // LIGHTON
