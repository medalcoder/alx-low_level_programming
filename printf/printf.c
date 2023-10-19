#include "main.h"


/**
 * _printf - mirrors printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...);
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", print_int}, {"%r", print_reverse}, {"%R", print_rot13}, {""}, {""}
	}
}
