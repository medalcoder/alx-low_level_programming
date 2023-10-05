#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int l, m;

	for (l = 0 ; s[l] != '\0' ; l++)
	{
		for (m = 0 ; s[l] != accept[m] ; m++)
		{
			if (accept[m] == '\0')
				return (l);
		}
	}
	return (0);
}
