#include<stdio.h>

int main(){
   int num20 = 20 , num10 = 10 , num5 = 5, num1 = 1;
   int divNum20, divNum10, divNum5, divNum1, totalAmount, reminderNum20, reminderNum10, reminderNum5;

   printf("Enter Total Amount: ");
   scanf("%d",&totalAmount);

    divNum20 = totalAmount / num20;
    reminderNum20 = totalAmount % num20;

    divNum10 = reminderNum20 / num10;
    reminderNum10 = reminderNum20 % num10;

    divNum5 = reminderNum10 / num5;
    reminderNum5 = reminderNum10 % num5;

    divNum1 = reminderNum5 / num1;

    printf("\t$20 Bills : %d \n",divNum20);
    printf("\t$10 Bills : %d \n", divNum10);
    printf("\t$05 Bills : %d \n", divNum5);
    printf("\t$01 Bills : %d \n", divNum1);

   getch();

}
