//
// Created by niffo on 5/1/2024.
//

#ifndef CUSTOMDISPLAY_H
#define CUSTOMDISPLAY_H
#include "DisplayElement.h"
#include "Observer.h"


class WeatherData;


class CurrentConditionsDisplay final: public Observer, public DisplayElement {

    WeatherData* weather_data_;

    //~ Weather Data
    float temperature_;
    float humidity_;
    float pressure_;

public:
    explicit CurrentConditionsDisplay(WeatherData* subject);
    ~CurrentConditionsDisplay() override = default;

    //~ Interface implementation
    void display() override;
    void update() override;
};

#endif //CUSTOMDISPLAY_H
