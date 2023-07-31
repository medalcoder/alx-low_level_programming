#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: area to fill with bytes
 * @b: area to fill with bytes
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
