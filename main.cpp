#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char**  argv)
{    
    unsigned int i = 40;
    unsigned char c = (char) i;

    std::cout << "i value = " << i << std::endl;
    std::cout << "c value = " << (unsigned int)c << std::endl;


    return 0;
}