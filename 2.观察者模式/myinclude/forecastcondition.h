#ifndef FORECASTCONDITION
#define FORECASTCONDITION

#include"displayelement.h"
#include"observable.h"
#include"observer.h"
#include<iostream>

class ForecastCondition:public Observer,public DisplayElement
{
private:
    double temperature;
    double humidity;
    Observable* obs;
public:
    ForecastCondition(Observable* obs){
        this->obs=obs;
        obs->regist(this);
    }
    void update(double temp,double hum) override;
    void display() override;
};

#endif