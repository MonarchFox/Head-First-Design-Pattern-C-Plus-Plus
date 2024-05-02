//
// Created by niffo on 4/30/2024.
//

#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

# include <iostream>


class QuackBehavior {
public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() = default;
};

class Quack final: public QuackBehavior {
public:
    void quack() override { std::cout << "Quack Quack!\n"; }
};

class QuackMute final: public QuackBehavior {
public:
    void quack() override { std::cout << "cant Quack!\n"; }
};

class QuackSqueak final: public QuackBehavior {
public:
    void quack() override { std::cout << "Squeak!\n"; }
};

#endif //QUACKBEHAVIOR_H
