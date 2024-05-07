#include <iostream>

#include "Chapter_7_The_Adapter_And_Facade_Pattern/Interfaces.h"
#include "Chapter_7_The_Adapter_And_Facade_Pattern/Users.h"
using namespace std;


void TestDuck(Duck* duck) {
    duck->Quack();
    duck->Fly();
}

void TestTurkey(Turkey* turkey) {
    turkey->Gobble();
    turkey->Fly();
}


int main()
{
    // Test Case 1
    Duck* duck = new MallardDuck();
    Turkey* turkey = new WildTurkey();
    TurkeyInDuckAdapter* turkey_adapter = new TurkeyInDuckAdapter(turkey);
    DuckInTurkeyAdapter* duck_adapter = new DuckInTurkeyAdapter(duck);

    TestDuck(duck);
    TestDuck(turkey_adapter);

    std::cout << "\n\n";

    TestTurkey(duck_adapter);
    TestTurkey(turkey);

    return 0;
}
