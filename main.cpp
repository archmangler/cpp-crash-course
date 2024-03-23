#include <iostream>
#include "dog.h"


int main(int argc,char** argv) 
{
    Dog* dog = new Dog();
    std::cout << "Dog total legs: " << dog->getTotalLegs() << std::endl;

    dog->setTotalLegs(4);
    std::cout << "Dog total legs: " << dog->getTotalLegs() << std::endl;

    delete dog; //we can do this because we have a destructor.
    
    return 0;
}