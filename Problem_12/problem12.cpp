//Project Euler Problem 12
//Peter Edin

#include <iostream>
#include <math.h>

int getTriNum(int triangleNumber){
  int sum=0;
  for(int i=1;i<=triangleNumber;i++){
    sum+=i;
  }
  return sum;
}
int getNumFactors(int number){
  int CAP =pow(number,.5)+1;
  int factorCount=2;
  for(int i=2;i<CAP;i++){
    if(number %i==0){
      factorCount+=2;
    }
  }
  return factorCount;
}
int main(){
  bool found=false;
  int i=1;
  while(!found){
    if(getNumFactors(getTriNum(i))>500){
      std::cout<<"Found~! TN = "<<getTriNum(i)<<"\n";
      found=true;
    }
    i++;
  }
}
