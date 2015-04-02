//Project Euler Problem 9
//Peter Edin

#include <iostream>

bool triplet(int a,int b, int c){
  bool isTrip=false;
  if(a*a+b*b==c*c){
    isTrip=true;
  }
  return isTrip;
}

int main(){
  const int cap=1000;
  for(int a=1;a<cap;a++){
    for(int b=1;b<cap;b++){
      for(int c=1;c<cap;c++){//heh c++
        if(!(a+b)<c){
          if(triplet(a,b,c)){
            if(a+b+c==1000){
              std::cout<<a<<" "<<b<<" "<<c<<" with product: "<<a*b*c<<"\n";
              break;
              break;
              break;
            }
          }
        }
      }
    }
  }

}
