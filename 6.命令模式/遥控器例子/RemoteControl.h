/* 
远程控制
 */

#if !defined(REMOTECONTROL)
#define REMOTECONTROL

#include"Command.h"

class RemoteControl
{
private:
    /* data */
    Command* command;
public:
    void set_command(Command* c){
        this->command=c;
    }
    void buttonPress(){
        command->execute();
    }
};

#endif // REMOTECONTROL
