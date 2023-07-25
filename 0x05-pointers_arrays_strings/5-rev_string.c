#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: function to be printed
 * Return: void
 */

void rev_string(char *s)
{
	int u;
	int count = 0;

	for (u = 0 ; s[u] != '\0' ; u++)
		count++;
	for (u = 0 ; u < count / 2 ; u++)
	{
		char v;

		v = s[u];
		s[u] = s[count - 1 - u];
		s[count - 1 - u] = v;
	}
}
