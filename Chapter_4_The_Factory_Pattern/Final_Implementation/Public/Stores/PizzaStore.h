//
// Created by niffo on 5/3/2024.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <string>

class Pizza;

class PizzaStore {
public:
    [[nodiscard]] Pizza* OrderPizza(std::string& Type);
    virtual Pizza* CreatePizza(std::string& Type) = 0;
    virtual ~PizzaStore() = default;
};

#endif //PIZZASTORE_H
