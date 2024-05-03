//
// Created by niffo on 5/4/2024.
//

#ifndef CHOCOLATEBOILER_IMPLEMENTATION_1_H
#define CHOCOLATEBOILER_IMPLEMENTATION_1_H
#include <string>
#include <iostream>

class ChocolateBoiler_Implementation_1 {
    //~ Meta Informations (Private Details)
    bool empty_;
    bool boiled_;
    std::string creator_name_;


public:
    //~ Constructor and Destructor
    ChocolateBoiler_Implementation_1(): empty_(true), boiled_(false), creator_name_("anyone") {}
    ~ChocolateBoiler_Implementation_1() = default;

    //~ Chocolate Methods
    void Fill() { if (IsEmpty()) empty_ = false, boiled_ = false; }
    void Drain() { if (!IsEmpty() && IsBoiled()) empty_ = true; }
    void Boil() { if (!IsEmpty() && !IsBoiled()) boiled_ = true; }

    void PrintInfo() const { std::cout << "Creator Name: " << creator_name_ << "\n"; }

    //~ Helper Methods
    [[nodiscard]] bool IsEmpty() const { return empty_; }
    [[nodiscard]] bool IsBoiled() const { return boiled_; }
};

#endif //CHOCOLATEBOILER_IMPLEMENTATION_1_H
