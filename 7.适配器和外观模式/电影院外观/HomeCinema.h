/* 
家庭电影院
对各种操作的封装
 */

#if !defined(HOME)
#define HOME

#include"Screen.h"
#include"Light.h"
#include"CdPlayer.h"

class HomeCinema
{
private:
    Light* light;
    Screen* screen;
    CdPlayer* cdplayer;
public:
    HomeCinema(Light* l,Screen* s,CdPlayer* cd){
        light=l;
        screen=s;
        cdplayer=cd;
    }
    void play(){
        light->on();
        screen->down();
        cdplayer->play();
    }
    void close(){
        cdplayer->close();
        screen->up();
        light->off();
    }
};


#endif // HOME
