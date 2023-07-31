#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int h, i;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}',};

	for (h = 0; s[h] != 0 ; h++)
	{
		if (h == 0 && s[h] >= 'a' && s[i] <= 'z')
			s[h] = s[h] - 32;
		for (i = 0 ; i < 13 ; i++)
		{
			if (s[h] == sp[i])
			{
				if (s[h + 1] >= 'a' && s[i + 1] <= 'z')
					s[h + 1] = s[h + 1] - 32;
			}
		}
	}
	return (s);
}
