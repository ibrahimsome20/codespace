#include <stdio.h>
void draw(int n){
 int y=n-1;
 int x=n-y;
  if(x==n){return;}
  for(int i=0;i<x;i++){
    printf("#");
  }
printf("\n");

  
}

int main (void){

        draw(4);

}


