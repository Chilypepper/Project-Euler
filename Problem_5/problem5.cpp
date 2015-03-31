//Project Euler Problem 5
//Peter Edin

#include <iostream>
#include <string>

bool divisByRange(int input){
  bool inRange=true;
  for(int i=1;i<=20;i++){
    if(input % i != 0){
      inRange=false;
      break;
    }
  }
  return inRange;
}

int main(){
  int start=2520;
  bool found=false;
  while(!found){
    if(divisByRange(start)){
      found=true;
    }
    else{
      start++;
    }
  }
  std::cout<<start<<" is the smallest number found\n";
}
