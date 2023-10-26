#include <stdio.h>
#include <cs50.h>

void sum(int x,int  y){
    float result=x+y;
    printf("%f\n",result);
}
int main(void){
float num1=get_int("enter your first number: ");
float num2=get_int("enter your secound number: ");
sum(num1,num2);

}

