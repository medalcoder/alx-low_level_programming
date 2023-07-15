#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    int i;

    // Print numbers 0 to 8 followed by a comma and space using putchar
    for (i = 0; i < 9; i++) {
        putchar('0' + i);
        putchar(','); // Print comma
        putchar(' '); // Print space
    }

    // Print the last number 9 followed by a newline using putchar
    putchar('9');
    putchar('\n');
