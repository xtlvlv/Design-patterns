#include"../myinclude/currentcondition.h"
#include"../myinclude/weatherdata.h"

/* 推的方式 */
void CurrentCondition::update(double temp,double hum){
    this->temperature=temp;
    this->humidity=hum;
    display();
}

/* 拉的方式 */
/* void CurrentCondition::update(Observable* obs){
    WeatherData* weather=(WeatherData*)obs;
    this->temperature=weather->get_temp();
    this->humidity=weather->get_humi();
    display();
} */

void CurrentCondition::display(){
    std::cout<<"当前温度："<<temperature<<std::endl;
    std::cout<<"当前湿度："<<humidity<<std::endl;
}