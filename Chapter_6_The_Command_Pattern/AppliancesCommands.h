//
// Created by niffo on 5/5/2024.
//

#ifndef APPLIANCES_H
#define APPLIANCES_H
#include "ApplianceItems.h"
#include "CommandInterface.h"

class Light;
class GarageDoor;

/* Creating All the Appliances here*/


class LightOnCommand final: public CommandInterface {

    Light* light_;

public:
    explicit LightOnCommand(Light* light): light_(light) {}
    void Execute() override;
    void Undo() override {}
    std::string GetName() override { return light_-> GetName(); }
};

class LightOffCommand final: public CommandInterface {

    Light* light_;

public:
    explicit LightOffCommand(Light* light): light_(light) {}
    void Execute() override { light_->Off(); }
    void Undo() override {}
    std::string GetName() override { return light_-> GetName(); }
};

class GarageDoorOpenCommand final: public CommandInterface {
    GarageDoor* garage_door_ = nullptr;

public:
    explicit GarageDoorOpenCommand(GarageDoor* garage_door): garage_door_(garage_door) {}
    void Execute() override;
    void Undo() override {}
};



#endif //APPLIANCES_H
