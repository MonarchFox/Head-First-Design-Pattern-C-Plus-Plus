//
// Created by niffo on 5/5/2024.
//

#ifndef COMMANDINTERFACE_H
#define COMMANDINTERFACE_H
#include <iostream>
#include <string>

class CommandInterface {
public:
    virtual ~CommandInterface() = default;

    virtual void Execute() = 0;
    virtual void Undo() = 0;

    virtual std::string GetName() { return  "No Slot Set"; }
};


class NoCommand final: public CommandInterface {
public:
    NoCommand() = default;
    void Execute() override { std::cout << "No Execution Configuration Found!"; }
    void Undo() override { std::cout << "No Undo Configuration Found!"; }
};

#endif //COMMANDINTERFACE_H
