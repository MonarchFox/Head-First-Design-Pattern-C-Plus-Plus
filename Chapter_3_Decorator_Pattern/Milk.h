//
// Created by niffo on 5/2/2024.
//

#ifndef MILK_H
#define MILK_H
#include "CondimentDecorator.h"
#include <iostream>

class Beverage;

class Milk final: public CondimentDecorator{

public:
    explicit Milk(Beverage* beverage){ Destription = "Milk"; SellingPrice = 22.f; beverage_ = beverage; }
};
#endif //MILK_H
