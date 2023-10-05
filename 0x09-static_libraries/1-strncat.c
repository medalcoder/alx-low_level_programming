#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: source string
* @n: numbers of bytes concatenated
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int u;

	for (u = 0 ; u < n && *src != '\0' ; u++)
	{
		dest[len + u] = *src;
			src++;
	}
	dest[len + u] = '\0';
	return (dest);
}
