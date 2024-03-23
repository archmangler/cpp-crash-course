#include <fstream>
#include <iostream>
#include <string>

class Animal
{
public:
    Animal()
    {

    }

virtual ~Animal()
{

}

};

class Dog : public Animal
{
public:
    Dog(): Animal()
    {

    }

virtual ~Dog()
{

}

int abc=666;

};


int main(int argc, char**  argv)
{    

    Animal* animal_one = new Dog();
    Dog* dog = (Dog*) animal_one;

    std::cout << "Access attribute of Dog Class: " << dog->abc << std::endl;

    return 0;
}