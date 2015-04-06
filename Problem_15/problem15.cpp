//Project Euler Problem 15
//Peter Edin
#include <iostream>
int main(){
  int ROW_SIZE=20;
  int COL_SIZE=20;
  long long grid[ROW_SIZE][COL_SIZE];
  for(int row=0;row<ROW_SIZE;row++){
    for(int col=0;col<COL_SIZE;col++){
      if(row==0 && col==0){
        grid[row][col]=2;
      }
      else if(row==0){
        grid[row][col]=grid[row][col-1]+1;
      }
      else if(col==0){
        grid[row][col]=grid[row-1][col]+1;
      }
      else{
        grid[row][col]=grid[row-1][col]+grid[row][col-1];
      }
    }
  }
  for(int rows=0;rows<ROW_SIZE;rows++){
    for(int cols=0;cols<COL_SIZE;cols++){
      std::cout<<grid[rows][cols]<<" ";
      if(cols==COL_SIZE-1){
        std::cout<<"\n";
      }
    }
  }
  std::cout<<"\n\n\n"<<"Final answer looks like: "<<grid[ROW_SIZE-1][COL_SIZE-1]<<"\n";
}
