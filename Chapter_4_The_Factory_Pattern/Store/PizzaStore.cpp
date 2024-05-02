//
// Created by niffo on 5/3/2024.
//
#include "PizzaStore.h"
#include "../Pizzas/Pizza.h"


Pizza* PizzaStore::orderPizza(const std::string& Type) {
    Pizza* pizza = CreatePizza(Type);
    pizza->PreparePizza();
    return pizza;
}
