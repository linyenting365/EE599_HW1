#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int input=5; 
    std::cout << solution.PrintMyname() << std::endl;
    if(input>=0){
    std::cout << "inputs:5, output: " << solution.Factorial(input)
            << std::endl;
    std::cout << "inputs:5, output: " << solution.Factorial_recursive(input)
            << std::endl;
    }
    else if(input<0){
        std:: cout<< "please enter positive interger or 0" 
        << std:: endl;
    }


    return EXIT_SUCCESS;
}