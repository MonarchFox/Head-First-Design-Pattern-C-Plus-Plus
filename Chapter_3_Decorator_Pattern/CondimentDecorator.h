//
// Created by niffo on 5/2/2024.
//

#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"


class CondimentDecorator: public Beverage{

protected:
    Beverage* beverage_ = nullptr;
public:
    void GetDescription() const override { beverage_->GetDescription(); std::cout << "   Added: " << Destription << " Cost: " << SellingPrice << "\n"; }
    [[nodiscard]] float Cost() const override { return beverage_->Cost() + SellingPrice; }
};
#endif //CONDIMENTDECORATOR_H
