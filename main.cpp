#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char**  argv)
{

std::streampos begin, end; //preparing to determine size of file
std::ifstream file("file.dat", std::ios::binary);

if(file.is_open())
{
    std::cout << "The file is open." << std::endl;
}
else
{
    std::cout << "problem opening the file: "<< std::endl;
    return 1;
}


begin = file.tellg();
file.seekg(0, std::ios::end);
end = file.tellg();

std::cout << "File size: " << (end - begin) << std::endl;
std::string msg;

/* When reading out file contents ...
while(getline(file,msg))
{
    std::cout << "file line -> " << msg << std::endl;
}
*/


    return 0;
}