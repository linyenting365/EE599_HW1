#include "solution.h"
#include <iostream>
#include <algorithm> 


double Solution::FindMedian(std::vector<double> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  double result;
  // std:: sort(inputs.begin(),inputs.end());
  //   if (inputs.size()%2==1) {
  //     result=(double)inputs[inputs.size()/2];
  //   }
  //   else{
  //     result=(double) (inputs[(inputs.size()-1)/2]+inputs[inputs.size()/2])/2;
  //     //std::cout <<(double) (inputs[(inputs.size()-1)/2]+inputs[inputs.size()/2])/2<< std ::endl;
  //   }
  // return result;

  // more efficient ways
  int size=inputs.size();
  if(size!=0){
    if (size %2 == 0){
      return(inputs[size/2-1]+inputs[size/2+1]) /2;
    }
    else{
      return inputs[size/2];
    }
  }
  else{
    return 0;
  }
}
