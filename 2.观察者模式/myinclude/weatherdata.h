#ifndef WEATHERDATA
#define WEATHERDATA

#include<iostream>
#include<vector>
#include"observable.h"
#include"observer.h"


class WeatherData:public Observable
{
private:
    std::vector<Observer*> observers;   //可以用map<string,Observer*>类型，便于查找删除
    double temperature=0;
    double humidity=0;
public:
    void regist(Observer* obj) override;
    void remove(Observer* obj) override;
    void notify() override;
    void meaturement_changed();
    void set_meaturement(double temp,double hum);
    double get_temp(){
        return temperature;
    }
    double get_humi(){
        return humidity;
    }
};

#endif