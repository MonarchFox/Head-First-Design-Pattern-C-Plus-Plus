//
// Created by niffo on 5/3/2024.
//

#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "PizzaStore.h"


class Pizza;


class NYPizzaStore final: public PizzaStore {
public:
    Pizza* CreatePizza(const std::string &Type) override;
};

#endif //NYPIZZASTORE_H
