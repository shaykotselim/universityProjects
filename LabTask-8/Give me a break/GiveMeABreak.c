#include <stdio.h>
//-----------------LAB TASK-8--------------
//--------------Give ME A Break---------

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int square = i * i;
        if (square % 2 == 0) {
            printf("%d\n", square);

            if (i % 24 == 0) {
                printf("Press enter to continue...");
                getchar(); // Pause until Enter key is pressed
            }
        }
    }

    return 0;
}

