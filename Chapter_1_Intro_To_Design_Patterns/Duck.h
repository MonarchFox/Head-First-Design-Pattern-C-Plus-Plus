//
// Created by niffo on 4/30/2024.
//

#ifndef DUCK_H
#define DUCK_H

class FlyBehavior;
class QuackBehavior;


class Duck {
    FlyBehavior* fly_behavior_;
    QuackBehavior* quack_behavior_;

public:
    Duck(FlyBehavior* fly_behavior, QuackBehavior* quack_behavior):
    fly_behavior_(fly_behavior), quack_behavior_(quack_behavior) {}

    virtual ~Duck() = default;

    //~ Abstract method
    virtual void display() = 0;

    //~ cant override with super call
    virtual void performFly();
    virtual void performQuack();

    //~ can completely override
    virtual void swim();

    //~ Setters and Getters
    void SetFlyBehavior(FlyBehavior* fly_behavior) { fly_behavior_ = fly_behavior; }
    [[nodiscard]] FlyBehavior* GetFlyBehavior() const { return fly_behavior_; }

    void SetQuackBehavior(QuackBehavior* quack_behavior) { quack_behavior_ = quack_behavior; }
    [[nodiscard]] QuackBehavior* GetQuackBehavior() const { return quack_behavior_; }

protected:
    template<class T>
    static bool IsValid(T* value) { return value != nullptr;}
};

class DuckMallard final: public Duck {
public:
    DuckMallard();
    void display() override;
};

class DuckModel final: public Duck {
public:
    DuckModel();
    void display() override;
};


#endif //DUCK_H


/**
 *      Test Cases to run in main.cpp
 */

// int main()
// {
//     // TestCase 1:
//     Duck* mallard = new DuckMallard();
//     mallard->display();
//     mallard->swim();
//     mallard->performFly();
//     mallard->performQuack();
//
//     // TestCase 2:
//     Duck* model = new DuckModel();
//     model->display();
//     model->swim();
//     model->performFly();
//     model->SetFlyBehavior(mallard->GetFlyBehavior());
//     model->performFly();
//     model->performQuack();
//     return 0;
// }
