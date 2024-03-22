#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char**  argv)
{
    
    int a = 50; //set the value of a variable to 50
    
    std::cout << "current value of a: " << a << std::endl;

    int* ptr = &a; //create a pointer called ptr which points to the location of the variable a in mem.
    *ptr = 25; //set the value inside the location ptr is pointing to to 25 (change the value inside variable a from 50 to 25)
    
    std::cout << "new value of a: " << a << std::endl;

    return 0;
}