#include <iostream>

/*NOTES:

1. Scopes within Scopes are possible
2. 




*/


//a very basic summer function
int sum(int x, int y){
    return x+y;
}



//the C++ main routine
int main(int argc, char** argv){

int age = 13;
if(age == 22){
    std::cout <<"Her age is 22 ...\n" << std::endl;
}

if(age > 17){
    std::cout << "You are legally entitled to buy whiskey!\n";
}
else
{
    std::cout << "No whiskey for you!!!\n";

}

for(int i = 0;i < 10;i++){
    std::cout << i <<": I will not do it again.\n" <<std::endl;
}
    return 0;
}
