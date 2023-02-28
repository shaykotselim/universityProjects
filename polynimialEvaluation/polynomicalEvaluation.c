/*
    Polynomial Evaluation:

    Write a C program that asks the user to enter the value of x
    and outputs the value of the following polynomial:
    3x5 + 2x4 - 5x 3 -x 2 + 7x - 6
*/
#include<stdio.h>

 int main(){
    float x,x2,x3,x4,x5, result;
    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x ;
    x2 = x * x;

    printf("please give input value :");
    scanf("%f", &x);

    result = 3*x5 + 2*x4 - 5*x3 - x2 + 7*x -6;

    printf("Polynomial: %.1f", result);

    getch();



 }
