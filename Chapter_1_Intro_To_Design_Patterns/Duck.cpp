//
// Created by niffo on 4/30/2024.
//

#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>


void Duck::swim() {
    std::cout << "All ducks float, even decoyes!" << "\n";
}

void Duck::performFly() {
    if (IsValid(fly_behavior_)) fly_behavior_->fly();
}

void Duck::performQuack() {
    if(IsValid(quack_behavior_)) quack_behavior_->quack();
}


DuckMallard::DuckMallard() : Duck(new FlyWithWings(), new Quack()) {}

void DuckMallard::display() {
    std::cout << "Mallard Duck!" << "\n";
}


DuckModel::DuckModel(): Duck(new FlyRocketPowered(), new Quack()) {}

void DuckModel::display() {
    std::cout << "I'm a model duck!\n";
}
