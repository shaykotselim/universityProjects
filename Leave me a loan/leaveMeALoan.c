    /*
            Leave Me A Loan:
    ABC Bank Ltd. provides loans to its customers. The
    customers return the amount by a fixed monthly payment. On

    each month however, the remaining balance is incremented by the
    interest rate assigned for each customer. The total balance at the
    end of each month can be
    calculated using the following formula:
    currBalance = prevBalance - pay + (prevBalance × rate)

    Here,
        currBalance = Updated Balance
        prevBalance = Previous Balance
        pay = Monthly Payment
        rate = Monthly Interest Rate
    Your task is to write a program that calculates the remaining
    payable amount on a loan after
    the first, second, and third monthly payment.
    Your program will take the loan amount, yearly interest rate, fixed
    monthly payment as input.
    You need to display each balance with two digits after the decimal
    point. 
        Sample Run:
    Enter amount of loan: 20000.00
    Enter interest rate: 6.0
    Enter monthly payment: 386.66
    Balance remaining after first payment: $19713.34
    Balance remaining after second payment:$19425.25
    Balance remaining after third payment: $19135.71
    */

#include<stdio.h>

int main (){
    float loanAmount , interest, monthlyPay;
    float interestAmount, totalInterestAmount, firstMonthAmount, secondMonthAmount, thirdMonthAmount;


    printf("\t Please Give Your Loan Amount :");
    scanf("%f",&loanAmount);

    printf("\t Please Give Your Interest Rate Amount :");
    scanf("%f",&interest);

    printf("\t Please Give Your Monthly Payable Amount :");
    scanf("%f", &monthlyPay);

    interestAmount = loanAmount * ((interest / 100 )/ 12);
    totalInterestAmount = loanAmount + interestAmount;

    firstMonthAmount = totalInterestAmount - monthlyPay;
    secondMonthAmount = firstMonthAmount - monthlyPay;
    thirdMonthAmount = secondMonthAmount - monthlyPay;
    printf("\t Balance remaining after first payment: %$.2f \n", firstMonthAmount);
    printf("\t Balance remaining after second payment:$ %.2f \n", secondMonthAmount);
    printf("\t Balance remaining after third payment:$ %.2f \n", thirdMonthAmount);

    getch();
}
