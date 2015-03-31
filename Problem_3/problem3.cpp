//Project Euler Problem 3
//Peter Edin

#include <iostream>
#include <math.h>

bool isPrime(int candidate){
  bool isPrime=true;
  for(int i=2;i<candidate;i++){
    if(candidate%i==0){
      isPrime=false;
      break;
    }
  }
  return isPrime;
}

int main(){
  long long int prim=600851475143;
  long long int subject=prim/2;
  int largest=0;
  for(int i=2;i<subject;i++){
    if(isPrime(i)){
      if(prim%i==0){
        largest=i;
      }
    }
  }
  std::cout<<largest<<" Is the largest prime factor of "<<prim<<"\n";
}
