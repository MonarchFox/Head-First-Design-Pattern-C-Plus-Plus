//
// Created by niffo on 5/1/2024.
//
#include "WeatherData.h"
#include "Observer.h"


void WeatherData::RegisterObserver(Observer *observer) {
    observers_.insert(observer);
}

void WeatherData::RemoveObserver(Observer *observer) {
    observers_.erase(observer);
}

void WeatherData::NotifyObservers() {
    for (Observer* observer: observers_) observer->update();
}
