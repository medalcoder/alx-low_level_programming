#include "main.h"

/**
 * print_oct - converts number to octal value
 * @val: variable parameter
 * Return: counter
 */

int print_oct(va_list val)
{
    int i, counter = 0;
    int *array;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    while (num / 8 != 0)
    {
        num = num / 8;
        counter++;
    }
    counter++;
    array = malloc(sizeof(int) * counter);

    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 8;
        temp = temp / 8;
    }
    for (i = counter - i; i >= 0; i--)
        _putchar(array[i] + '0');
    free(array);
    return (counter);
}
