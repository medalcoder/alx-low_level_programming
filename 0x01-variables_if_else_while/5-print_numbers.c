#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    char digit;

    // Print single-digit numbers of base 10 starting from 0 using putchar
    for (digit = '0'; digit <= '9'; digit++) {
        putchar(digit);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
