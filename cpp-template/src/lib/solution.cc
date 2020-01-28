#include "solution.h"
#include <iostream>

std::string Solution::PrintMyname() { 
  return "My name is Yen-Ting Lin";  
}

int Solution:: Factorial(int input){
  int result=1;
  if (input == 0) {
    return 1;
  }
  if(input > 0){
    for(int i= input; i>0; i--){
       result = result* i;
       // std::cout<< result << std::endl; 
    }
    return result;
  }
  if (input <0) {
    return -1;
  }

}
int Solution:: Factorial_recursive(int input){

  if (input == 0) {
    return 1;
  }
  if(input > 0){
   return Factorial_recursive(input-1)*input;
  }
  if (input <0) {
    return -1;
  }
}

