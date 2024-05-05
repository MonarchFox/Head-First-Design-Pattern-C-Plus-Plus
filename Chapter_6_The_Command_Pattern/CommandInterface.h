//
// Created by niffo on 5/5/2024.
//

#ifndef COMMANDINTERFACE_H
#define COMMANDINTERFACE_H

class CommandInterface {
public:
    virtual ~CommandInterface() = default;

    virtual void Execute() = 0;
    virtual void Undo() = 0;
};


class NoCommand final: public CommandInterface {
public:
    NoCommand() = default;
    void Execute() override {}
    void Undo() override {}
};

#endif //COMMANDINTERFACE_H
