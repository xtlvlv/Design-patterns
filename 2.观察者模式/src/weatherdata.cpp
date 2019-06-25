#include"../myinclude/weatherdata.h"
#include<algorithm>

using namespace std;

void WeatherData::regist(Observer* obj){
    // vector<Observer*>::iterator it = find(observers.begin(),observers.end(),obj);
    observers.push_back(obj);
}

// class observer_equal{
// private:
//     Observer* o1;
//     Observer* o2;
// public:
//     int operator()(const vector<Observer*>::value_type o1, o2) const{
//         return o1==o2;
//     }
//     observer_equal(Observer* o1,Observer* o2){
//         this->o1=o1;
//         this->o2=o2;
//     }
// };

void WeatherData::remove(Observer* obj){
    // vector<Observer>::iterator it=find_if(observers.begin(),observers.end(),observer_equal(obj,obj));
    //先用这种办法吧，，，仿函数还不太会用
    for(int i=0;i<=observers.size();++i){
        if(observers[i]==obj){
            observers.erase(observers.begin()+i);
        }
    }
}

void WeatherData::notify(){
    if(changed){

        for(int i=0;i<observers.size();++i){
            observers[i]->update(temperature,humidity);
        }
    }
    changed=false;
}

void WeatherData::meaturement_changed(){
    notify();
}

void WeatherData::set_meaturement(double temp,double hum){
    this->temperature=temp;
    this->humidity=hum;
    meaturement_changed();
}