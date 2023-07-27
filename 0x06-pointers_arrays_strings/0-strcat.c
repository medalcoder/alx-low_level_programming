#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenate 2 strings
* @dest: destination of concatenation
* @src: source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int h

	for (h = 0 ; dest[h] != '\0' ; h++)
		destlen++;
	for (h = 0 ; src[h] != '\0' ; h++)
		srclen++;
	for (h = 0 ; h <= srclen ; h++)
		dest[destlen + h]; = src[h];
	return (dest);
}
 
