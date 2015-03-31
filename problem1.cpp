//Project Euler Problem 1
//Peter Edin
#include <iostream>

int main()
{
  int multiple1=3;
  int multiple2=5;
  int count=0;
  for(int i=1;i<1000;i++){
    if(i%multiple1==0 || i%multiple2==0){
      count+=i;
    }
  }
  std::cout<<count<<"\n";
}
