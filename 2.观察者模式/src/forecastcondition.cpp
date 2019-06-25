#include"../myinclude/forecastcondition.h"

void ForecastCondition::update(double temp,double hum){
    this->temperature=temp+5;
    this->humidity=hum+5;
    display();
}

void ForecastCondition::display(){
    std::cout<<"将来温度："<<temperature<<std::endl;
    std::cout<<"将来湿度："<<humidity<<std::endl;
}