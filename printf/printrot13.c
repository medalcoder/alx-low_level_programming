# include "main.h"

/**
 * print_rot13 - convert to rot13
 * @val: arguments
 * Return: counter
*/

int print_rot13(va_list val)
{
    int i, j, counter = 0;
    int k = 0;
    char *s = va_arg(val, char*)
    char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char b[] = {"nopqrstuvwzyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"}

    if (s == NULL)
            s = "(null)";
        for (i = 0; a[j] && !k; j++)
        {
            if (s[i] == a[j])
            {
                _putchar(b[j]);
                counter++;
                k = 1;
            }
            if (!k)
            {
                _putchar(s[i]);
                counter++;
            }
        }
        return (counter);
}