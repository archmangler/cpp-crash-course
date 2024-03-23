#include "dog.h"
#include <iostream>

Dog::Dog()
{
    std::cout << "DOG!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "DOG DEAD!" << std::endl;
}

void Dog::setTotalLegs(int total_legs)
{
    this->totalLegs = total_legs;
}

int Dog::getTotalLegs()
{
    return this->totalLegs;
}