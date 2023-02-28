/*
                Counting Denominations:
    Convenience Delivery Store(CDS) of Imperial University of
    Tokyo (IUT) is a retail business that stocks a range of everyday
    items such as snack foods, confectionery, soft drinks, toiletries,
    etc. As the university houses international students, the store
    accepts $ as payment currency. Everyday numerous students get
    their daily goods from CDS. After purchasing an item, whenever a
    student

    gives a note of large denomination (like $500 for example), the
    owner of the shop Mr. Sakamoto faces a huge problem. He can
    easily calculate the amount to be returned.
    But he doesn’t know how to pay that amount using the smallest
    number of denominations.
    Mr. Sakamoto knows you’re a great programmer and asked for
    your help. You need to write a program that takes the U.S. dollar
    amount as input and then shows how to pay that amount using
    the smallest number of $20, $10, $5, and $1 bills.

    Mr. Sakamoto has assured you that he will not enter any
    fractional value as input. 
    Sample run:
    Enter a dollar amount: 93
    $20 bills: 4
    $10 bills: 1
    $5 bills: 0
    $1 bills: 3

*/
#include<stdio.h>

int main(){
   int num20 = 20 , num10 = 10 , num5 = 5, num1 = 1;
   int divNum20, divNum10, divNum5, divNum1, totalAmount, reminderNum20, reminderNum10, reminderNum5;

   printf("\t Enter Total Amount: ");
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
