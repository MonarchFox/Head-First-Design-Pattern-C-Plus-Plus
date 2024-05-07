//
// Created by niffo on 5/7/2024.
//

#ifndef INTERFACES_H
#define INTERFACES_H


/** Duck Interface */
class Duck {
public:
    virtual void Quack() = 0;
    virtual void Fly() = 0;
    virtual ~Duck() = default;
};

/** Turkey Interface */
class Turkey {
public:
    virtual void Gobble() = 0;
    virtual void Fly() = 0;
    virtual ~Turkey() = default;
};

// I decided to choose this naming convention
class TurkeyInDuckAdapter final: public Duck {
    Turkey* turkey_;

public:
    explicit TurkeyInDuckAdapter(Turkey* turkey): turkey_(turkey) {}
    ~TurkeyInDuckAdapter() override { delete turkey_; }

    void Quack() override { turkey_->Gobble(); }
    void Fly() override { turkey_-> Fly(); }
};

class DuckInTurkeyAdapter final: public Turkey {
    Duck* duck_;
public:
    explicit DuckInTurkeyAdapter(Duck* duck): duck_(duck) {}
    ~DuckInTurkeyAdapter() override { delete duck_; }

    void Gobble() override { duck_-> Quack(); }
    void Fly() override { duck_->Fly(); }
};

#endif //INTERFACES_H
