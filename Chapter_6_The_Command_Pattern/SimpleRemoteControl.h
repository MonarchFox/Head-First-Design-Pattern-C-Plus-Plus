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
    SimpleRemoteControl() = default;

    void SetCommand(CommandInterface* command) {
        slot_ = command;
    }

    void ButtonPressed() {
        slot_->Execute();
    }
};



#endif //SIMPLEREMOTECONTROL_H
