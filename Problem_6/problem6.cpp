//Project Euler Problem 6
//Peter Edin

#include <iostream>

int main(){
  const int upperRange=100;
  long long int squareCount=0;
  long long int squareSum=0;

  for(int i=1;i<=upperRange;i++){
    squareCount+=i*i;
    squareSum+=i;
  }
  squareSum*=squareSum;
  long long int diff = squareSum-squareCount;
  std::cout<<diff<<" is the difference\n";

}
