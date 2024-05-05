//
// Created by niffo on 5/5/2024.
//

#include "AppliancesCommands.h"
#include "ApplianceItems.h"



//~ Light Implementation
void LightOnCommand::Execute() {
    std::cout << "Light On Command Sent!\n";
    light_->On();
}


void GarageDoorOpenCommand::Execute() {
    std::cout << "Garage Door Command Sent!\n";
    garage_door_->Up();
    garage_door_->LightOn();
}
