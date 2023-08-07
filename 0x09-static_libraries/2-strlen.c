#include "main.h"

/**
 * _strlen - function that find the length of a string
 * @s: the counted string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	return (count);
}
