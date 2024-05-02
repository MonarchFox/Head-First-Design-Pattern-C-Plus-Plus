//
// Created by niffo on 5/3/2024.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <string>


class Pizza;


class PizzaStore {
public:
    Pizza* orderPizza(const std::string& Type);
    virtual Pizza* CreatePizza(const std::string& Type) = 0;

    virtual ~PizzaStore() = default;
};



#endif //PIZZASTORE_H
