#include <stdio.h>
int plus(int x,int y){
    int result=x+y;
    return result;
}
int main (void){
    printf("hello world\n");
    int x= plus(50,20);
    printf("your result is %i\n"x);
}