#include "main.h"

/**
 * print_alphabet_x10 -  function prints alphabe ten times
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	int o;
	char i;

	for (o = 0; o < 10; o++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
