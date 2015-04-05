//Project Euler Problem 14
//Peter Edin

#include <iostream>

int generateSeries(int input){
  int count=1;
  long long startingVal=input;
  while(startingVal!=1){
    if(startingVal % 2 ==0){
      startingVal/=2;
    }
    else{
      startingVal=3*startingVal+1;
    }
    count++;
  }
  return count;
  
}
int main(){
  const int CAP=1000000;
  int greatestLength=0;
  int greatestStart=0;
  for(int i=1;i<CAP;i++){
    int length=generateSeries(i);
    if(length>greatestLength){
      greatestLength=length;
      greatestStart=i;
      std::cout<<"Current largest: "<<i<<"\n";
      std::cout<<"Current GL: "<<greatestLength<<"\n";
    }
    if(i%1000==0){
      std::cout<<"Cecking: "<<i<<"\n";
    }
  }
  std::cout<<"The greatest starting value is "<<greatestStart<<"\n";
}
