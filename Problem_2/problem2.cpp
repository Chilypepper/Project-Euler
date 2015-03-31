//Project Euler Problem 2
//Peter Edin
#include <iostream>

int main(){
  const int cap=4000000;
  int termOne=1;
  int termTwo=2;
  int sum=2;
  int fibTerm=0;

  while(fibTerm<=cap){
    fibTerm=termOne+termTwo;
    termOne=termTwo;
    termTwo=fibTerm;
    if(fibTerm%2==0 && fibTerm<cap){
      sum+=fibTerm;
    }
  }
  std::cout<<sum<<"\n";
}
