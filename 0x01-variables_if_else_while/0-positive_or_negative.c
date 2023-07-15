#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Function to get the last digit of a number */
int getLastDigit(int number) {
    return abs(number) % 10;
}

int main(void) {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int lastDigit = getLastDigit(n);

    printf("The string Last digit of %d is ", n);
    
    if (lastDigit > 5)
        printf("and is greater than 5\n");
    else if (lastDigit == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}
