#include <stdio.h>
#include <cs50.h>

float sum(float x,float y){
    float result=x+y;
    printf("%f\n",result);
}
void int main(){
float num1=get_float("enter your first number: ");
float num2=get_float("enter your secound number: ");
sum(num1,num2);

}

