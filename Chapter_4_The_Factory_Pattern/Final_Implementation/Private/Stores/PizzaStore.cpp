//
// Created by niffo on 5/3/2024.
//
#include "../../Public/Stores/PizzaStore.h"
#include "../../Public/Pizza/Pizza.h"

Pizza* PizzaStore::OrderPizza(std::string& Type) {
    Pizza* pizza = CreatePizza(Type);
    pizza->Prepare();
    return pizza;
}
