#include <stdio.h>
//____________________LAB TASK__________________________
//____________________Calendars_________________________
void print_calendar(int month, int year, int start_day);

int main() {
    int month, year, start_day;

    // Taking input for month, year, and start_day
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the start day (0-6 where 0 represents Sunday): ");
    scanf("%d", &start_day);

    // Calling the print_calendar function
    print_calendar(month, year, start_day);

    return 0;
}

void print_calendar(int month, int year, int start_day) {
    int day, weekday;

    // Printing the month and year header
    switch (month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month");
    }

    printf(" %d\n", year);

    // Printing the weekday names
    printf("Mon  Tue  Wed  Thu  Fri  Sat  Sun\n");

    // Finding the day of the week for the first day of the month
    day = 1;
    weekday = (day + start_day - 1) % 7;

    // Printing leading spaces until the first day of the month
    for (int i = 0; i < weekday; i++) {
        printf("     ");
    }

    // Printing the calendar
    while (day <= 31) { // Assuming maximum 31 days in a month
        printf("%-4d ", day);

        if (weekday == 6) { // If Sunday, move to the next line
            printf("\n");
        }

        day++;
        weekday = (weekday + 1) % 7;
    }
}

