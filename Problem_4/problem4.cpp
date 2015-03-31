//Project Euler Problem 4
//Peter Edin
#include <iostream>
#include <string>
#include <sstream>

bool isPalindrome(int int1, int int2){
  int product = int1*int2;
  std::string candidate =std::to_string(product);
  const int l=candidate.length();
  bool isPally=true;
  for(int i=0;i<l;i++){
    if(candidate.at(i)!=candidate.at(l-i-1)){
      isPally=false;
    }
  }
  return isPally;

}

int main(){

  int largestFact1=0;
  int largestFact2=0;
  int largestProduct=0;
  for(int first=1;first<1000;first++){
    for(int second=1;second<1000;second++){
      if(first*second>largestProduct){
        if(isPalindrome(first,second)){
          largestFact1=first;
          largestFact2=second;
          largestProduct=first*second;
        }
        
      }
    }
  }

  
  std::cout<<largestProduct<<"\n";

}
