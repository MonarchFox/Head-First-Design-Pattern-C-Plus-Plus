//
// Created by niffo on 5/1/2024.
//

#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include <set>

class Observer;

class Observer;

class WeatherData final: public Subject {
    std::set<Observer*> observers_;
    float temperature_{};
    float humidity_{};
    float pressure_{};
public:
    WeatherData() = default;

    //~ Interface
    void RegisterObserver(Observer *observer) override;
    void RemoveObserver(Observer *observer) override;
    void NotifyObservers() override;

    // Givens
    [[nodiscard]] float GetTemperature () const { return temperature_; }
    [[nodiscard]] float GetHumidity() const { return humidity_; }
    [[nodiscard]] float GetPressure() const { return pressure_; }

    // Test Purpose
    void SetTemperature (const float temperature) { temperature_ = temperature; MeasurementsChanged(); }
    void SetHumidity(const float humidity) { humidity_ = humidity; MeasurementsChanged(); }
    void SetPressure(const float pressure) { pressure_ = pressure; MeasurementsChanged(); }

    void MeasurementsChanged() { NotifyObservers(); }
};


#endif //WEATHERDATA_H


//~ For Test only cupy and paste it on main.cpp

// #include <iostream>
// #include "Chapter_2_The_Observer_Pattern/CustomDisplay.h"
// #include "Chapter_2_The_Observer_Pattern/DisplayElement.h"
// #include "Chapter_2_The_Observer_Pattern/WeatherData.h"
// using namespace std;
//
//
//
// int main()
// {
//     // TestCase1
//     WeatherData* weather_data = new WeatherData();
//     DisplayElement* current = new CurrentConditionsDisplay(weather_data);
//
//     current->display();
//     weather_data->SetHumidity(10.f);
//     weather_data->SetPressure(100.f);
//     weather_data->SetTemperature(100.f);
//     current->display();
//
//     return 0;
// }
