#include "main.h"

/**
 * _printf - mirrors printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_per}, {"%i", print_int}, {"%d", print_dec}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", printEXSTR}, {"%p", print_pointer}, {"%r", print_reverse}, {"%R", print_rot13}};

	va_list args;
	int i = 0, len = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (p[k].ph[0] == format[i] && p[k].ph[1] == format[i + 1])
			{
				len += p[k].function(args);
				i = i + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
