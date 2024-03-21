#include <vector>
#include <iostream>

int main(int argc, char**  argv)
{
    std::vector<int> vec;
    vec.push_back(55);
    vec.push_back(53);
    vec.push_back(53);
    vec.push_back(56);
    vec.push_back(45);
    vec.push_back(65);
    vec.push_back(75);
    vec.push_back(15);
    vec.push_back(45);

for (int i=0;i<vec.size(); i++) 
{
    std::cout << "vec[i] -> " << vec[i] << std::endl;
}

vec.pop_back();


std::cout << "pop back ?" <<"\n";

for (int i=0;i<vec.size(); i++) 
{
    std::cout << "vec[i] -> " << vec[i] << std::endl;
}

    return 0;
}