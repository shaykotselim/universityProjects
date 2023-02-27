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
    printf("\t Balance remaining after first payment: %.2f \n", firstMonthAmount);
    printf("\t Balance remaining after second payment: %.2f \n", secondMonthAmount);
    printf("\t Balance remaining after third payment: %.2f \n", thirdMonthAmount);
    getch();
}
