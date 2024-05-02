//
// Created by niffo on 5/2/2024.
//

#ifndef SOY_H
#define SOY_H
#include "CondimentDecorator.h"
#include <iostream>

class Beverage;

class Soy final: public CondimentDecorator{

public:
    explicit Soy(Beverage* beverage){ Destription = "Soy"; SellingPrice = 3.f; beverage_ = beverage; }
};
#endif //SOY_H
