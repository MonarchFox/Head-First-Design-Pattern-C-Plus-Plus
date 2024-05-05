//
// Created by niffo on 5/5/2024.
//

#include "Appliances.h"
#include "Item.h"



//~ Light Implementation
void LightOnCommand::Execute() {
    light_->On;
}
