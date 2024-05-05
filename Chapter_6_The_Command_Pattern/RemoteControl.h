//
// Created by niffo on 5/6/2024.
//

#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include <vector>
#include "CommandInterface.h"
#include <string>

class RemoteControl {
    std::vector<CommandInterface*> onCommands_;
    std::vector<CommandInterface*> offCommands_;

    const int available_slot_ {7};

public:
    RemoteControl() {
        for (int i = 0; i < available_slot_; i++)
        {
            onCommands_.emplace_back(new NoCommand());
            offCommands_.emplace_back(new NoCommand());
        }
    }

    void SetCommand(const int slot, CommandInterface* on_command,
        CommandInterface* off_command) {
        if (!IsValid(slot)) return;

        onCommands_[slot] = on_command;
        offCommands_[slot] = off_command;
    }

    void OnButtonPushed(const int slot) const {
        if (IsValid(slot)) onCommands_[slot]->Execute();
    }

    void OffButtonPushed(const int slot) const {
        if (IsValid(slot)) offCommands_[slot]->Execute();
    }

    [[nodiscard]] std::string ToString() const {
        std::string Temp;
        Temp.append("\n------ Remote Control -------\n");
        for (int i = 0; i < available_slot_; i++) {
            Temp.append("[Slot " + std::to_string(i) + "]: " + onCommands_[i]->GetName() + "\n");
        }
        return Temp;
    }

protected:
    [[nodiscard]] bool IsValid(const int index) const {
        return index >= 0 && index < available_slot_;
    }
};

#endif //REMOTECONTROL_H
