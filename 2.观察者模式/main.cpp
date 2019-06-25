#include<iostream>
#include"./myinclude/weatherdata.h"
#include"./myinclude/currentcondition.h"
#include"./myinclude/forecastcondition.h"

using namespace std;

int main(){

    WeatherData* weather=new WeatherData();
    CurrentCondition* cur=new CurrentCondition(weather);
    ForecastCondition* fore=new ForecastCondition(weather);
    weather->set_meaturement(1,1);
    weather->remove(fore);
    weather->set_meaturement(2,2);
    return 0;
}