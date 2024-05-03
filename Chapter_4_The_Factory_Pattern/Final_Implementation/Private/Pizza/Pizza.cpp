//
// Created by niffo on 5/3/2024.
//
#include "../../Public/Pizza/Pizza.h"
#include <iostream>

void Pizza::Bake() const {
    std::cout << "Baking...\n";
}

void Pizza::Cut() const {
    std::cout << "Cutting...\n";
}

void Pizza::Box() const {
    std::cout << "Creating Box...\n";
}