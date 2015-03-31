//Project Euler Problem 7
//Peter Edin

#include <iostream>
#include <math.h>

bool isPrime(int candidate){
  bool isPrime=true;
  int upperRange=pow(candidate,.5);
  for(int i=2;i<=upperRange;i++){
    if(candidate % i ==0){
      isPrime=false;
      break;
    }
  }
  return isPrime;
}

int main(){
  int primeCount=0;
  int candidate=2;
  int largest=0;
  const int primeTerm=10001;
  while(primeCount!=primeTerm){
    if(isPrime(candidate)){
      primeCount+=1;
      largest=candidate;
      std::cout<<candidate<<" is the "<<primeCount<<" prime number\n";
    }
    candidate+=1;
  }
  std::cout<<candidate-1<<" is the 10001 prime\n";
}
