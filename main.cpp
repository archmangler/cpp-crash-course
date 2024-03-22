#include <fstream>
#include <iostream>
#include <string>

struct abc
{
    /* data */
    int a;
    int b;
};


int main(int argc, char**  argv)
{    

    struct abc x;
    x.a = 33;
    x.b = 44;

    struct abc* xxx  = &x;

    xxx->a = 3;
    xxx->b = 4;

    std::cout << "xxx->a = " << xxx->a << std::endl;
    std::cout << "xxx->b = " << xxx->b << std::endl;

    std::count 
    

    return 0;
}