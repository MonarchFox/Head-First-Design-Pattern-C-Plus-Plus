//
// Created by niffo on 5/3/2024.
//

#include "NYPizzaStore.h"
#include "../Pizzas/Pizza.h"


Pizza *NYPizzaStore::CreatePizza(const std::string &Type) {
    if (Type == "cheese") return new NYStyleCheesePizza();
    return nullptr;
}
