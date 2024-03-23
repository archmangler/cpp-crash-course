#include <iostream>
#include "dog.cpp"


int main(int argc,char** argv) 
{
    Dog* dog = new Dog();
    std::cout << "Dog total legs: " << dog->getTotalLegs() << std::endl;

    dog->setTotalLegs(4);
    std::cout << "Dog total legs: " << dog->getTotalLegs() << std::endl;
    
    return 0;
}