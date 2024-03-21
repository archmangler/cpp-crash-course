#include <string>
#include <iostream>

int main(int argc, char**  argv)
{

    std::string str = "helloworld";
    std::string str2 = "hello universe!";

    std::cout << (str + str2) << std::endl;

    std::string str3 = std::to_string(100);
    std::cout << str3 << std::endl;

    return 0;
}