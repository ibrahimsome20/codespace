#include <stdio.h>
void draw(int n){
 int x=n-(n-1);
    if(x==n){return;}
  for(int i=0;i<x;i++){
    printf("#");
  }
printf("\n");
  draw(n+1);
}

int main (void){

        draw(4);

}


