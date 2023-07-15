#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    int i;

    // Print numbers 0 to 9 using putchar
    for (i = 0; i < 10; i++) {
        putchar('0' + i);
    }

    // Print lowercase letters a to f using putchar
    for (i = 0; i < 6; i++) {
        putchar('a' + i);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
