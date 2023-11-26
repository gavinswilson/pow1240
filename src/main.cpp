#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char* argv[]) 
{ 
    std::cout << "You have entered " << argc << " arguments" << std::endl;
    
    unsigned long long int bob;

    for (int i = 1; i < argc; i++) 
    {
        std::cout << argv[i] << " " << std::endl;
    }
    
    
}   