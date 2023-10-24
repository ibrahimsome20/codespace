#include <stdio.h>
void draw(int n){
if(n==0){return;}

  for(int i=0;i<n;i++){
    printf("#");
  }
  printf("\n");
draw(n-1);

}

int main (void){

        draw(4);

}


