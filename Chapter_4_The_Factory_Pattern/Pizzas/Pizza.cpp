//
// Created by niffo on 5/3/2024.
//

#include "Pizza.h"


void Pizza::Prepare() const {
    std::cout << "Preparing " << name_ << " Pizza\n";
    std::cout << "Tossing " << dough_ << " dough...\n";
    std::cout << "Adding " << sauce_ << " sauce...\n";
    std::cout << "Adding toppings:\n";

    int counter = 1;
    for (const std::string& topping: toppings_)
    {
        std::cout << counter << " \t" << topping << "\n";
        counter++;
    }
}

void Pizza::Bake() const {
    std::cout << name_ << " Bake Time: " << bake_time_ << " minutes at " << bake_degree_ << "\n";
}

void Pizza::Cut() const {
    std::cout << "Cutting the "<< name_ << " pizza into diagonal slices\n";
}

void Pizza::Box() const {
    std::cout << "Place "<< name_ << " pizza in official PizzaStore box\n";
}

void Pizza::PreparePizza() const {
    Prepare();
    Bake();
    Cut();
    Box();
}
