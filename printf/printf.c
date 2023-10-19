#include "main.h"

/**
 * _printf - mirrors printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_per}, {"%d", print_dec}, {"%i", print_int}, {"%r", print_reverse}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_EXSTR}, {"%p", print_pointer}
	};

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
			if (m[k].id[0] == format[i] && m[k].id[i] == format[i + 1])
			{
				len = len + m[k].f(args);
				i = i + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
