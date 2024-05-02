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
        Chapter_4_The_Factory_Pattern/Store/PizzaStore.h
        Chapter_4_The_Factory_Pattern/Store/NYPizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Store/NYPizzaStore.h
        Chapter_4_The_Factory_Pattern/Store/ChicagoPizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Store/ChicagoPizzaStore.h
        Chapter_4_The_Factory_Pattern/Pizzas/Pizza.h
        Chapter_4_The_Factory_Pattern/Store/PizzaStore.cpp
        Chapter_4_The_Factory_Pattern/Pizzas/Pizza.cpp
)
