//
// Created by niffo on 5/2/2024.
//

#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "Beverage.h"


class Espresso final: public Beverage {

public:
    Espresso(){ Destription = "Espresso"; SellingPrice = 19.f; }
};
#endif //ESPRESSO_H
