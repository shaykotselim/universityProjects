
#include <stdio.h>
//-------------LAB TASK-8---------------
//-------------Double Trouble ------------

int main() {
    double number, sum = 0.0;

    while (1) {
        printf("Enter a number (0 or negative number to end): ");
        scanf("%lf", &number);

        if (number <= 0)
            break;

        sum += number;
    }

    printf("Sum: %.2lf\n", sum);

    return 0;
}
