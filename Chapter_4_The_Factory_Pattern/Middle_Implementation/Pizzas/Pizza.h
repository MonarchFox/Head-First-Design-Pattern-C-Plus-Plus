//
// Created by niffo on 5/3/2024.
//

#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>
#include <iostream>

class Pizza {

protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;

    //~ Pipeline Variables
    float bake_time_ {25.f};
    float bake_degree_ {350.f};

    //~ Pizza Preparation Methods
    virtual void Prepare() const;
    virtual void Bake() const;
    virtual void Cut() const;
    virtual void Box() const;


public:

    void PreparePizza() const;
    virtual ~Pizza() {
        toppings_.clear();
    }

    //~ Getters and Setters
    [[nodiscard]] std::string GetName() const { return name_; }
    [[nodiscard]] float GetBakeTime() const { return bake_time_; }
    [[nodiscard]] float GetBakeDegree() const { return bake_time_; }
};

//~ Other Pizzas

class NYStyleCheesePizza final: public Pizza {
public:
    NYStyleCheesePizza() {
        name_ = "NY Style Sauce and Cheese";
        dough_ = "Thin Crust";
        sauce_ = "Marinara";
        toppings_.emplace_back("Grated Reggiano Cheese");
        toppings_.emplace_back("Grated Reggiano Butter");
    }
};

class ChicagoStyleCheesePizza final: public Pizza {
    public:
    ChicagoStyleCheesePizza() {
        name_ = "Chicago Style Deep Dish and Cheese";
        dough_ = "Extra Thick Crust";
        sauce_ = "Plum Tamato Sauce";
        toppings_.emplace_back("Shredded Mozzarella Cheese");
    }
protected:
    void Cut() const override { std::cout << "Cutting Pizza Into Square Slices\n"; }
};

#endif //PIZZA_H
