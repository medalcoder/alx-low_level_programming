#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    char lowercase;

    // Print the lowercase alphabet excluding 'q' and 'e' using putchar
    for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        if (lowercase != 'q' && lowercase != 'e') {
            putchar(lowercase);
        }
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
