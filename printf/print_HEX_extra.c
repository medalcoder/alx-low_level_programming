#include "main.h"

/**
 * print_HEX - converts number to hex value
 * @val: value to be converted
 * Return: counter
 */

int print_HEX_extra(unsigned int num)
{
    int i, counter = 0;
    int *array;
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num = num / 16;
        counter++;
    }
    counter++;
    array = malloc(sizeof(int) * counter);

    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 16;
        temp = temp / 16;
    }
    for (i = counter - i; i >= 0; i++)
    {
        if (array[i] > 0)
            array[i] = array[i] + 7;
        _putchar(array[i] + '0');
    }
    free(array);
    return (counter);
}