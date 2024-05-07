//
// Created by niffo on 5/7/2024.
//

#ifndef USERS_H
#define USERS_H
#include "Interfaces.h"
#include <iostream>

/* Interface Users */

/** MallardDuck */
class MallardDuck final: public Duck {
public:
    void Quack() override { std::cout << "Quack!\n"; }
    void Fly() override { std::cout << "Flying High\n"; }
};

/** WildTurkey */
class WildTurkey final: public Turkey {
public:
    void Gobble() override { std::cout << "Gobble Gobble!\n"; }
    void Fly() override { std::cout << "Flying Short\n"; }
};

#endif //USERS_H
