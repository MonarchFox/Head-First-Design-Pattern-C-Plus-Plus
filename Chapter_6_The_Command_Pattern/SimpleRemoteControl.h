//
// Created by niffo on 5/5/2024.
//

#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H
#include "CommandInterface.h"


class CommandInterface;


class SimpleRemoteControl {
    CommandInterface* slot_;
public:
    SimpleRemoteControl() {
        slot_ = new NoCommand();
    }

    void SetCommand(CommandInterface* command) {
        slot_ = command;
    }

    void ButtonPressed() {
        slot_->Execute();
    }
};



#endif //SIMPLEREMOTECONTROL_H


// TESTING CODE
//
// #include <iostream>
//
// #include "Chapter_6_The_Command_Pattern/Appliances.h"
// #include "Chapter_6_The_Command_Pattern/Item.h"
// #include "Chapter_6_The_Command_Pattern/SimpleRemoteControl.h"
// using namespace std;
//
//
// int main()
// {
//     // Test
//     SimpleRemoteControl* remote_control = new SimpleRemoteControl();
//
//     // Setting Up Remote Slot Functionality
//     Light* light = new Light();
//     LightOnCommand* light_on_command = new LightOnCommand(light);
//     remote_control->SetCommand(light_on_command);
//
//     // Testing
//     remote_control->ButtonPressed();
//     return 0;
// }
