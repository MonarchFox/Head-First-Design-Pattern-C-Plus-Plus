//
// Created by niffo on 5/3/2024.
//

#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include <string>

//~ Forward Declarations
class Cheese;
class Clam;
class Dough;
class Sauce;
class Veggies;
class Pepperoni;

class PizzaIngredientFactory {
public:
    Dough* CreateDough();
    Sauce* CreateSauce();
    Cheese* CreateCheese();
    Veggies* CreateVeggies();
    Pepperoni* CreatePepperoni();
    Clam* CreateClam();
};

#endif //PIZZAINGREDIENTFACTORY_H
