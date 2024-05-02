//
// Created by niffo on 4/30/2024.
//

#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

class FlyBehavior {
public:
    virtual void fly() = 0;
    virtual ~FlyBehavior() = default;
};

class FlyWithWings final: public FlyBehavior {
public:
    void fly() override { std::cout << "flying!\n"; }
};

class FlyNoWay final: public FlyBehavior {
public:
    void fly() override { std::cout << "Cant Fly!\n"; }
};

class FlyRocketPowered final: public FlyBehavior {
    void fly() override { std::cout << "I'm Flying with rocket mf!\n";}
};

#endif //FLYBEHAVIOR_H
