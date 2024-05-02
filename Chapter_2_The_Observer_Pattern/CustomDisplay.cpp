//
// Created by niffo on 5/1/2024.
//

#include <iostream>
#include "CustomDisplay.h"
#include "WeatherData.h"


CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData *weather_data) {
    weather_data_ = weather_data;
    weather_data_->RegisterObserver(this);

    temperature_ = 0;
    humidity_ = 0;
    pressure_ = 0;
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Temperature: " << temperature_ << "\n"
    << "Humidity: " << humidity_ << "\n"
    << "Pressure: " << pressure_ << "\n";
}

void CurrentConditionsDisplay::update()
{
    temperature_ = weather_data_->GetTemperature();
    humidity_ = weather_data_->GetHumidity();
    pressure_ = weather_data_->GetPressure();
}
