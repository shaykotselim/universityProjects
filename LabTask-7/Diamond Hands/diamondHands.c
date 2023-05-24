#include <stdio.h>
//-----------------LAB TASK 7-----------------
//__________________Diamond Hands_________________

double calculateCommission(double value) {
    double commission;

    if (value < 2500) {
        commission = 30 + 0.017 * value;
    } else if (value < 6250) {
        commission = 56 + 0.0066 * value;
    } else if (value < 20000) {
        commission = 76 + 0.0034 * value;
    } else if (value < 50000) {
        commission = 100 + 0.0022 * value;
    } else if (value < 500000) {
        commission = 155 + 0.0011 * value;
    } else {
        commission = 255 + 0.0009 * value;
    }

    if (commission < 39) {
        commission = 39; // Minimum charge is $39
    }

    return commission;
}

int main() {
    double stocksValue;

    while (1) {
        printf("Enter the value of stocks traded (enter 0 to exit): ");
        scanf("%lf", &stocksValue);

        if (stocksValue == 0) {
            break; // Exit the loop if trade value is 0
        }

        double commission = calculateCommission(stocksValue);

        printf("The broker's commission for stocks valued at $%.2lf is $%.2lf\n", stocksValue, commission);
    }

    return 0;
}


