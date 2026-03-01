#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, month, day, number, monthdays, i;
    int monthf[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Validate input for year
    while (1) {
        printf("Enter the year: ");
        if (scanf("%d", &year) != 1 || year <= 0) {
            printf("Invalid input. Please enter a positive integer for the year.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else {
            break;
        }
    }

    // Check for leap year and adjust February's days if necessary
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        monthf[1] = 29; // February has 29 days in a leap year
    }

    // Validate input for month
    while (1) {
        printf("Enter the month (1-12): ");
        if (scanf("%d", &month) != 1 || month < 1 || month > 12) {
            printf("Invalid input. Please enter a valid month between 1 and 12.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else {
            break;
        }
    }

    // Validate input for day
    while (1) {
        printf("Enter the day: ");
        if (scanf("%d", &day) != 1 || day <= 0 || day > monthf[month - 1]) {
            printf("Invalid input. Please enter a valid day between 1 and %d for the given month.\n", monthf[month - 1]);
            while (getchar() != '\n'); // Clear input buffer
        } else {
            break;
        }
    }

    // Calculate the day number of the year
    monthdays = 0;
    for (i = 0; i < month - 1; i++) {
        monthdays = monthdays + monthf[i];
    }
    number = day + monthdays;

    // Output the day number of the year
    printf("Day number: %d\n", number);

    return 0;
}
