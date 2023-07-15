#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    char lowercase, uppercase;

    // Print the lowercase alphabet using putchar
    for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
    }

    // Print a new line using putchar
    putchar('\n');

    // Print the uppercase alphabet using putchar
    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }

    // Print a new line using putchar
    putchar('\n');

    return (0);
}
