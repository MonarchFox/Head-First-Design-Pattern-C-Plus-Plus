#include <iostream>

#include "Chapter_4_The_Factory_Pattern/Pizzas/Pizza.h"
#include "Chapter_4_The_Factory_Pattern/Store/ChicagoPizzaStore.h"
#include "Chapter_4_The_Factory_Pattern/Store/NYPizzaStore.h"
#include "Chapter_4_The_Factory_Pattern/Store/PizzaStore.h"
using namespace std;



int main()
{
    // Test
    PizzaStore* NyStore = new NYPizzaStore();
    PizzaStore* ChicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = NyStore->orderPizza("cheese");
    cout << "\n";
    pizza = ChicagoStore->orderPizza("cheese");
    return 0;
}
