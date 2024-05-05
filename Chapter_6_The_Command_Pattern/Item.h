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
    std::string LightOnMessage {"Turning On Lights\n" };
    std::string LightAlreadyOnMessage { "Lights Alright On\n" };

    std::string LightOffMessage {"TLights Off\n" };
    std::string LightAlreadyOffMessage { "Lights Alright Off\n" };

    bool status_ { false };
    static std::unordered_map<std::string, Light*> home_lights;
    std::string light_name {};

    Light() = default;

public:

    static Light* GetInstance() {
        const ull light_counts = home_lights.size();
        const std::string default_name = "unnamed_" + std::to_string(light_counts);
        home_lights[default_name] = new Light();
        return home_lights[default_name];
    }

    static Light* GetInstance(const std::string& name) {
        if (!home_lights[name])
        {
            home_lights[name] = new Light();
        }
        return home_lights[name];
    }

    ~Light() {
        home_lights.clear();
    }

    void On() {
        if (!status_) std::cout << LightOnMessage, status_ = true;
        else std::cout << LightAlreadyOnMessage;
    }

    void Off() {
        if (status_) std::cout << LightOffMessage, status_ = false;
        else std::cout << LightAlreadyOffMessage;
    }

    static void PrintLights()
    {
        for(auto& light: home_lights) {
            std::cout << light.first << ", ";
        }
        std::cout << "\n";
    }
};


#endif //ITEM_H
