//
// Created by niffo on 5/3/2024.
//

#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include "PizzaStore.h"


class ChicagoPizzaStore final: public PizzaStore {
public:
    Pizza* CreatePizza(const std::string &Type) override;
};

#endif //CHICAGOPIZZASTORE_H
