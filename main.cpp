#include <iostream>


int main(int argc, char** argv)
{

    int array[10];

    for(int i=0;i<10;i++)
    {
        array[i] = i;
    }

    for(int j=0;j<10;j++)
    {
        std::cout << "array item value: " << array[j] << std::endl;
    }
    return 0;
}