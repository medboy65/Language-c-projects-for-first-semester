#include <stdio.h>

int main() {
    int a, b, c;                            //@Mohammed Lamkhayar 24070260026//
    int X;

    // Loop until the user enters valid input
    while (1) {
        X = 1;  // Assume input is valid initially
                                                                                 //@Mohammed Lamkhayar 24070260026// //@Mohammed Lamkhayar 24070260026//
        // Ask the user to input three integers
        printf("Enter three integers : ");

        // Try to read three integers
        if (scanf("%d %d %d", &a, &b, &c) != 3) {
            // If scanf fails to read three integers, clear the input buffer and prompt again
            printf("Invalid input. Please enter valid integers.\n");
            X = 0; // Mark input as invalid
            while(getchar() != '\n'); // Clear the buffer
        }                                  //@Mohammed Lamkhayar 24070260026//

        // If the input is valid, break out of the loop
        if (X) {
            break;
        }
    }

    // Find the maximum value among a, b, and c                                      //@Mohammed Lamkhayar 24070260026//
    int max_value = a; // Assume a is the largest initially

    if (b > max_value) {
        max_value = b;
    }
    if (c > max_value) {                                                                                         //@Mohammed Lamkhayar 24070260026//                    
        max_value = c;
    }

    // Print the maximum value
    printf("The largest number is: %d\n", max_value);

    return 0;
}

