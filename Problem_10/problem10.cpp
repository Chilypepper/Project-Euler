//Project Euler Problem 10
//Peter Edin

#include <iostream>
#include <math.h>

bool isPrime(int candidate){
  bool isPrime=true;
  for(int i=2;i<pow(candidate,.5)+1;i++){
    if(candidate % i==0){
      isPrime=false;
      break;
      break;
    }
  }
  return isPrime;
}

int main(){
  const int LIMIT=2000000;
  long long sum=2;
  for(int i=2;i<LIMIT;i++){
    if(isPrime(i)){
     sum+=i;
    }
  }
  std::cout<<sum<<" is the sum\n";  
}
