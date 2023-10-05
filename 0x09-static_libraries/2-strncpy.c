#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0 ; f < n && src[f] != '\0' ; f++)
		dest[f] = src[f];
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
