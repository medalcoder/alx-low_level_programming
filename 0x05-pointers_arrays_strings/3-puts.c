#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int g;

	for (g = 0 ; str[g] != '\0' ; g++)
		_putchar(str[g]);
	_putchar('\n');
}
