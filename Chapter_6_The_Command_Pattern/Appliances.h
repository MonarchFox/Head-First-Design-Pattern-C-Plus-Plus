//
// Created by niffo on 5/5/2024.
//

#ifndef APPLIANCES_H
#define APPLIANCES_H
#include "CommandInterface.h"

class Light;

/* Creating All the Appliances here*/


class LightOnCommand: public CommandInterface{

    Light* light_;

public:
    explicit LightOnCommand(Light* light): light_(light) {}
    void Execute() override;
};



#endif //APPLIANCES_H
