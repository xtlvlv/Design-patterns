/* 
播放CD
 */

#if !defined(CDPLAYER)
#define CDPLAYER

#include<iostream>

using namespace std;

class CdPlayer
{
private:
    
public:
    void play(){
        cout<<"CD Play!"<<endl;
    }
    void close(){
        cout<<"CD close!"<<endl;
    }
};



#endif // CDPLAYER
