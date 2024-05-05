//
// Created by niffo on 5/5/2024.
//

#ifndef ITEM_H
#define ITEM_H

#include <unordered_map>
#include <string>
#include <utility>
#include <iostream>

using ull = unsigned long long;


class Light {

    //~ Meta Information
    std::string light_on_message_ {"Turning On Lights\n" };
    std::string light_already_on_messag_message_ { "Lights Alright On\n" };

    std::string light_off_message_ {"TLights Off\n" };
    std::string light_already_off_message_ { "Lights Alright Off\n" };

    bool status_ { false };
    std::string light_name_ { "UN_NAMED" };

public:

    Light() = default;
    explicit Light(std::string  name): light_name_(std::move(name)) {}

    void On() {
        if (!status_) std::cout << light_name_ << " " <<  light_on_message_, status_ = true;
        else std::cout << light_already_on_messag_message_;
    }

    void Off() {
        if (status_) std::cout << light_name_ << " " <<  light_off_message_, status_ = false;
        else std::cout << light_already_off_message_;
    }

    [[nodiscard]] std::string GetName() const { return light_name_; }
};

class GarageDoor {

    //~ Meta Information
    std::string on_message_ {"Turning On Lights\n" };
    std::string already_on_messag_message_ { "Lights Alright On\n" };

    std::string off_message_ {"TLights Off\n" };
    std::string already_off_message_ { "Lights Alright Off\n" };

    bool status_ { false };
    std::string appliance_name_ { "UN_NAMED" };

public:

    GarageDoor() = default;
    explicit GarageDoor(std::string  name): appliance_name_(std::move(name)) {}

    void LightOn() {
        if (!status_) std::cout << on_message_, status_ = true;
        else std::cout << already_on_messag_message_;
    }

    void LightOff() {
        if (status_) std::cout << off_message_, status_ = false;
        else std::cout << already_off_message_;
    }

    void Up() const {
        std::cout << appliance_name_ << " Door Up!\n";
    }

    void Down() const {
        std::cout << appliance_name_ << " Door Down!\n";
    }

    void Stop() const {
        std::cout << appliance_name_ << " Door Stopped!\n";
    }

    [[nodiscard]] std::string GetName() const { return appliance_name_; }
};

#endif //ITEM_H
