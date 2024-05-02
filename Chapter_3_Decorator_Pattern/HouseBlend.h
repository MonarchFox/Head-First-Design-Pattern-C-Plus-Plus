//
// Created by niffo on 5/2/2024.
//

#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Beverage.h"


class HouseBlend final: public Beverage{

public:
    HouseBlend(){ Destription = "HouseBlend"; SellingPrice = 10.f; }
};

#endif //HOUSEBLEND_H
