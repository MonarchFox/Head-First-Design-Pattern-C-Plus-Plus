//
// Created by niffo on 5/2/2024.
//

#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <iostream>

class Beverage {
protected:
    std::string Destription;
    float SellingPrice {};
public:
    virtual ~Beverage() = default;
    virtual void GetDescription() const { std::cout << "Beverage: " << Destription << " Cost: " << SellingPrice << "\n"; }
    [[nodiscard]] virtual float Cost() const { return SellingPrice; }

    //~ Getter and Setters
    void SetCost(const float NewCost) { SellingPrice = NewCost; }
};


#endif //BEVERAGE_H


// Copy paste in ur main.cpp

// #include <iostream>
//
// #include "Chapter_3_Decorator_Pattern/Beverage.h"
// #include "Chapter_3_Decorator_Pattern/CondimentDecorator.h"
// #include "Chapter_3_Decorator_Pattern/DarkRoast.h"
// #include "Chapter_3_Decorator_Pattern/Espresso.h"
// #include "Chapter_3_Decorator_Pattern/Milk.h"
// #include "Chapter_3_Decorator_Pattern/Mocha.h"
// #include "Chapter_3_Decorator_Pattern/Soy.h"
// #include "Chapter_3_Decorator_Pattern/Whip.h"
// using namespace std;
//
//
//
// int main()
// {
//     // TestCase 1
//     Beverage* beverage_1 = new Espresso();
//     beverage_1 = new Mocha(beverage_1);
//     beverage_1 = new Mocha(beverage_1);
//     beverage_1 = new Whip(beverage_1);
//     beverage_1->GetDescription();
//     cout << "Total Cost:\t\t" << beverage_1->Cost() << "\n";
//
//     // Test Case 2
//     Beverage* beverage_2 = new DarkRoast();
//     beverage_2 = new Mocha(beverage_2);
//     beverage_2 = new Milk(beverage_2);
//     beverage_2 = new Soy(beverage_2);
//     beverage_2->GetDescription();
//     cout << "Total Cost:\t\t" << beverage_2->Cost() << "\n";
//     return 0;
// }
