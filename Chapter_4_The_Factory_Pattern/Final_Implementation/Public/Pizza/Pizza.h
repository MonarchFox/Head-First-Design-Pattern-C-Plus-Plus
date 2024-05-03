//
// Created by niffo on 5/3/2024.
//

#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>

class PizzaIngredientFactory;
//~ Forward Declarations
class Cheese;
class Clam;
class Dough;
class Sauce;
class Veggies;
class Pepperoni;


class Pizza {

    //~ No Direct Access
    std::string name_;
    Dough* dough_ = nullptr;
    Sauce* sauce_ = nullptr;
    Cheese* cheese_ = nullptr;
    std::vector<Veggies*> veggies_;
    Pepperoni* pepperoni_ = nullptr;
    Clam* clam_ = nullptr;

protected:
    PizzaIngredientFactory* ingredient_factory_ = nullptr;

    virtual void Bake() const;
    virtual void Cut() const;
    virtual void Box() const;
    virtual void SetName(std::string& name) { name_ = name; }

public:
    virtual ~Pizza();
    virtual void Prepare() = 0;
    std::string ToString(){ return name_; }


    // Getters and Setters
    [[nodiscard]] Dough* GetDough() const { return dough_; }
    void SetDough(Dough* dough) { dough_ = dough; }

    [[nodiscard]] Sauce* GetSauce() const { return sauce_; }
    void SetSauce(Sauce* sauce) { sauce_ = sauce; }

    [[nodiscard]] Cheese* GetCheese() const { return cheese_; }
    void SetCheese(Cheese* cheese) { cheese_ = cheese; }

    [[nodiscard]] std::vector<Veggies*> GetVeggies() const { return veggies_; }
    void SetSVeggies(const std::vector<Veggies*>& veggies) { veggies_ = veggies; }

    [[nodiscard]] Pepperoni* GetPepperoni() const { return pepperoni_; }
    void Setpepperoni(Pepperoni* pepperoni) { pepperoni_ = pepperoni; }

    [[nodiscard]] Clam* GetClam() const { return clam_; }
    void SetSauce(Clam* clam) { clam_ = clam; }
};

#endif //PIZZA_H
