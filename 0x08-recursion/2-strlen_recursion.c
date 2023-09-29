#include "main.h"

/**
 * _strlen_recursion - function that return the length of a string
 * @s: string to find its length
 * return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
