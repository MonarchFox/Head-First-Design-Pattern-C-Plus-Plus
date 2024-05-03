cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        Chapter_1_Intro_To_Design_Patterns/Duck.cpp
        Chapter_1_Intro_To_Design_Patterns/Duck.h
        Chapter_1_Intro_To_Design_Patterns/FlyBehavior.h
        Chapter_1_Intro_To_Design_Patterns/QuackBehavior.h
        Chapter_2_The_Observer_Pattern/Subject.h
        Chapter_2_The_Observer_Pattern/DisplayElement.h
        Chapter_2_The_Observer_Pattern/Observer.h
        Chapter_2_The_Observer_Pattern/CustomDisplay.cpp
        Chapter_2_The_Observer_Pattern/CustomDisplay.h
        Chapter_2_The_Observer_Pattern/WeatherData.h
        Chapter_2_The_Observer_Pattern/WeatherData.cpp
        Chapter_3_Decorator_Pattern/Beverage.h
        Chapter_3_Decorator_Pattern/HouseBlend.h
        Chapter_3_Decorator_Pattern/DarkRoast.h
        Chapter_3_Decorator_Pattern/Espresso.h
        Chapter_3_Decorator_Pattern/Decaf.h
        Chapter_3_Decorator_Pattern/CondimentDecorator.h
        Chapter_3_Decorator_Pattern/Milk.h
        Chapter_3_Decorator_Pattern/Mocha.h
        Chapter_3_Decorator_Pattern/Soy.h
        Chapter_3_Decorator_Pattern/Whip.h
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/PizzaStore.h
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/NYPizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/NYPizzaStore.h
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/ChicagoPizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/ChicagoPizzaStore.h
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Pizzas/Pizza.h
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Store/PizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Middle_Implementation/Pizzas/Pizza.cpp
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/Stores/PizzaStore.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/PizzaIngredientFactory.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Private/Stores/PizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Cheese/Cheese.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Clam/Clam.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Dough/Dough.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Pepperoni/Pepperoni.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Sauce/Sauce.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/IngredientRegions/Veggies/Veggies.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Public/Pizza/Pizza.h
        Chapter_4_The_Factory_Pattern/Final_Implementation/Private/Pizza/Pizza.cpp
)
