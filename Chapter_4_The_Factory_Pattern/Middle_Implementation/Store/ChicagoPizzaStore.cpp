//
// Created by niffo on 5/3/2024.
//

#include "ChicagoPizzaStore.h"
#include "../Pizzas/Pizza.h"


Pizza *ChicagoPizzaStore::CreatePizza(const std::string &Type) {
    if (Type == "cheese") return new ChicagoStyleCheesePizza();
    return nullptr;
}
