#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    char lowercase;

    // Print the lowercase alphabet in reverse using putchar
    for (lowercase = 'z'; lowercase >= 'a'; lowercase--) {
        putchar(lowercase);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
