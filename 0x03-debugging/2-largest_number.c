#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers, no matter the case.
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    /* The following if statement checks if all three numbers are equal. */
    if (a == b && b == c)
    {
        /* If all three numbers are equal, the largest number is the first one. */
        largest = a;
    }
    else
    {
        /* If all three numbers are not equal, we use the original logic to find the largest number. */
        if (a > b && b > c)
        {
            largest = a;
        }
        else if (b > a && a > c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }
    }

    return (largest);
}

