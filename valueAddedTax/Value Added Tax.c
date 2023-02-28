/*
        Value Added Tax:
    Bvaly is a multinational business venture that focuses on e-
    commerce. To cover the maintenance cost, they charge 5% VAT
    for any item purchased. For example: If you buy a product worth
    $100.00, you have to pay $105.00 (including VAT). They have
    hired you to automate the process of 
    calculating the amount a customer needs to pay. Write a C
    program that asks the user to ender the dollar-and-cents amount,
    then displays the amount with 5% VAT added. 

            Sample run:
        Enter an amount: 100.00
        With VAT added: 105.00
        Note that, underlined value denotes user input.
*/

#include<stdio.h>
    int main(){
            // declar variable type;

            float price ,  result , vat5;

            vat5 = 1.05;

            // scan number ;
            printf("Enter Product Price: ");
            scanf("%f",&price);
            // result ;
            result = price * vat5;


            printf("Total Price With 5 percent vat : %.2f ", result);
            getch();



    }
