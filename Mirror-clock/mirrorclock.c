
#include <stdio.h>
// Mirror Clock


int main() {
    int actHour, actMin, refHour, refMin;

    // Input the actual time
    printf("Enter the actual time (hour minute): ");
    scanf("%d %d", &actHour, &actMin);

    // Calculate the reflection time
    refHour = 12 - actHour;
    refMin = 60 - actMin;

    // Adjust the reflection time if necessary
    if (refMin == 60) {
        refHour += 1;
        refMin = 0;
    }
    if (refHour > 12) {
        refHour -= 12;
    }

    // Output the reflection time
    printf("Reflection time: %02d:%02d\n", refHour, refMin);

    return 0;
}
