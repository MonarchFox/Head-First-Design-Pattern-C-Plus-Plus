//
// Created by niffo on 5/4/2024.
//

#ifndef CHOCOLATEBOILER_IMPLEMENTATION_2_H
#define CHOCOLATEBOILER_IMPLEMENTATION_2_H
#include <iostream>


class ChocolateBoiler_Implementation_2 {
    //~ Meta Informations (Private Details)
    bool empty_;
    bool boiled_;
    static ChocolateBoiler_Implementation_2* instance_;
    static int count_;


    //~ Constructor and Destructor
    ChocolateBoiler_Implementation_2(): empty_(true), boiled_(false) {}
    ~ChocolateBoiler_Implementation_2() = default;

public:

    //~ Static Instance
    static ChocolateBoiler_Implementation_2& GetInstance(int count) {
        if (instance_ == nullptr) instance_ = new ChocolateBoiler_Implementation_2(), count_ = count;
        return *instance_;
    }

    //~ Chocolate Methods
    void Fill() { if (IsEmpty()) empty_ = false, boiled_ = false; }
    void Drain() { if (!IsEmpty() && IsBoiled()) empty_ = true; }
    void Boil() { if (!IsEmpty() && !IsBoiled()) boiled_ = true; }

    static void PrintInfo() { std::cout << "Creator Count: " << count_ << "\n"; }


    //~ Helper Methods
    [[nodiscard]] bool IsEmpty() const { return empty_; }
    [[nodiscard]] bool IsBoiled() const { return boiled_; }
};

#endif //CHOCOLATEBOILER_IMPLEMENTATION_2_H
