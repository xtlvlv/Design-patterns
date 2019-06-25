#include"RemoteControl.h"
#include"LightOnCommand.h"
#include"LightOffCommand.h"

int main(){

    RemoteControl* rc=new RemoteControl();
    Light* light=new Light();
    rc->set_command(new LightOnCommand(light));
    rc->buttonPress();
    rc->set_command(new LightOffCommand(light));
    rc->buttonPress();
    return 0;
}