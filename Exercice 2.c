#include <stdio.h>

int main()
{
    // Set the letters that spell out "China" in separate variables                            //@Mohammed Lamkhayar 24070260026//
    // Each character is handled individually for flexibility
    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';                                                            //@Mohammed Lamkhayar 24070260026//

    // Adjust each character by shifting it by 4 places
    // This operation modifies each letter to a different one by adding a constant value
    c1 = c1 + 4; // 'C' becomes 'G'
    c2 = c2 + 4; // 'h' becomes 'l'
    c3 = c3 + 4; // 'i' becomes 'm'
    c4 = c4 + 4; // 'n' becomes 'r'
    c5 = c5 + 4; // 'a' becomes 'e'                                                                    //@Mohammed Lamkhayar 24070260026//            //@Mohammed Lamkhayar 24070260026//

    // Output the new set of characters as one string
    // The letters are printed together as a new word, reflecting the changes
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);

    // End the program with a successful exit                                                    //@Mohammed Lamkhayar 24070260026//
    return 0;
}

