//
// Created by niffo on 5/2/2024.
//

#ifndef MOCHA_H
#define MOCHA_H
#include "CondimentDecorator.h"
#include <iostream>

class Beverage;

class Mocha final: public CondimentDecorator{

public:
    explicit Mocha(Beverage* beverage){ Destription = "Mocha"; SellingPrice = 4.f; beverage_ = beverage; }
};
#endif //MOCHA_H
