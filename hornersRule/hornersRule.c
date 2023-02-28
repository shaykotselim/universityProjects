/*
        Horner’s Rule:
    Modify the program of the last task so that the polynomial is
    evaluated using the following formula:

    ((((3x+2)x-5)x-1)x+7)x-6

    Note that the modified program performs fewer multiplications.
    This technique for evaluating polynomials is known as Horner’s Rule.
*/

#include<stdio.h>
int main (){
        float x, result;

        printf("The value of X : ");
        scanf("%f",&x);
        result =((((3*x)*x-3)*x-1)*x+7)*x-6;
        printf("The final Result : %f", result);
        getch();


}
