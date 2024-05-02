//
// Created by niffo on 5/2/2024.
//

#ifndef WHIP_H
#define WHIP_H
#include "CondimentDecorator.h"
#include <iostream>

class Beverage;

class Whip final: public CondimentDecorator{

public:
    explicit Whip(Beverage* beverage){ Destription = "Whip"; SellingPrice = 6.f; beverage_ = beverage; }
};
#endif //WHIP_H
