#include <iostream>
#include <string>
#include <cmath>


int divisible_by_num(int num, int div)
{
    if (num % div == 0)
        return 1;
    else
        return 0;
}

int main(int argc, char* argv[]) 
{ 
    std::cout << "You have entered " << argc << " arguments" << std::endl;
    
    unsigned long long int bob;

    for (int i = 1; i < argc; i++) 
    {
        std::cout << argv[i] << " " << std::endl;

        int answer = divisible_by_num(std::stoi(argv[i]),11);

        std::cout << std::stoi(argv[i]) << " " << answer << std::endl;

    }
    
    
}   