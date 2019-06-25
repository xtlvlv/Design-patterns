#ifndef CURRENTDISPLAY
#define CURRENTDISPLAY

#include"displayelement.h"
#include"observable.h"
#include"observer.h"
#include<iostream>

class CurrentCondition:public Observer,public DisplayElement
{
private:
    double temperature;
    double humidity;
    Observable* obs;
public:
    CurrentCondition(Observable* obs){
        this->obs=obs;
        obs->regist(this);
    }
    void update(double temp,double hum) override;
    void display() override;
};

#endif