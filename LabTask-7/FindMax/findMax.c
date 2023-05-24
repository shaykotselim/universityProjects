#include <stdio.h>
// ______________LAB TASK_______________
//________________Find MAX______________
int main() {
    double number, largest = 0;

    printf("Enter a number: ");
    scanf("%lf", &number);

    while (number > 0) {
        if (number > largest)
            largest = number;

        printf("Enter a number: ");
        scanf("%lf", &number);
    }

    printf("The largest number entered was %.2lf\n", largest);

    return 0;
}
