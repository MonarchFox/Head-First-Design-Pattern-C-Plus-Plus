//
// Created by niffo on 5/4/2024.
//

#ifndef CHOCOLATEBOILER_IMPLEMENTATION_4_H
#define CHOCOLATEBOILER_IMPLEMENTATION_4_H
#include <mutex>
#include <string>
#include <iostream>


class ChocolateBoiler_Implementation_5 {
    //~ Meta Informations (Private Details)
    bool empty_;
    bool boiled_;
    static ChocolateBoiler_Implementation_5* instance_;
    static std::mutex mutex_;
    static std::string creator_name_;

    //~ Constructor and Destructor
    ChocolateBoiler_Implementation_5(): empty_(true), boiled_(false) {}
    ~ChocolateBoiler_Implementation_5() = default;

public:

    //~ Static Instance
    static ChocolateBoiler_Implementation_5& GetInstance(const std::string& name) {
        // Double-checked locking for efficiency
        if (!instance_) {
            std::lock_guard<std::mutex> lock(mutex_);
            instance_ = new ChocolateBoiler_Implementation_5();
            creator_name_ = name;
        }
        return *instance_;
    }

    //~ Chocolate Methods
    void Fill() { if (IsEmpty()) empty_ = false, boiled_ = false; }
    void Drain() { if (!IsEmpty() && IsBoiled()) empty_ = true; }
    void Boil() { if (!IsEmpty() && !IsBoiled()) boiled_ = true; }
    static void PrintInfo() { std::cout << "Creator Name: " << creator_name_ << "\n"; }

    //~ Helper Methods
    [[nodiscard]] bool IsEmpty() const { return empty_; }
    [[nodiscard]] bool IsBoiled() const { return boiled_; }
};
#endif //CHOCOLATEBOILER_IMPLEMENTATION_4_H
