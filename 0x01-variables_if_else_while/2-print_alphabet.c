#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    char ch;

    // Print the alphabet from 'a' to 'z' using putchar
    for (ch = 'a'; ch <= 'z'; ch++) {
        putchar(ch);
    }

    // Print a new line using putchar
    putchar('\n');

    return (0);
}
