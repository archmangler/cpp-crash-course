#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char**  argv)
{

std::ifstream file("file.dat");

if(file.is_open())
{
    std::cout << "The file is open." << std::endl;
}
else
{
    std::cout << "problem opening the file: "<< std::endl;
    return 1;
}

std::string msg;

while(getline(file,msg))
{
    std::cout << "file line -> " << msg << std::endl;
}
    return 0;
}