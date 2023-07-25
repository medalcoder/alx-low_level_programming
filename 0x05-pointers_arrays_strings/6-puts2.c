#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int g;

	for (g = 0 ; str[g] != '\0' ; g++)
	{
		if (g % 2 == 0)
			_putchar(str[g]);
	}
	_putchar('\n');
}
