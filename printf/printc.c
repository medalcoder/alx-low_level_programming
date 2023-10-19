#include "main.h"

/**
 * printf_char - prints a character
 * @val: argument to print
 * Return: 1
 */

int print_char(va_list val)
{
    char str;

    str = va_arg(val, int);
    _putchar(str);
    return (1);
}
