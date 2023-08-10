#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int j;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0 ; s1[j] != '\0' ; j++)
		s1len++;
	for (j = 0 ; s2[j] != '\0' ; j++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);

	for (j = 0 ; s1[j] != '\0' ; j++)
		output[j] = s1[j];
	for (j = 0 ; s2[j] != '\0' ; j++)
		output[s1len + j] = s2[j];
	return (output);
}
