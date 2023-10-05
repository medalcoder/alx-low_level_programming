#include "main.h"
#include <stdio.h>

/**
 * create_array - creates array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (k = 0 ; k < size ; k++)
		array[k] = c;
	return (array);
}
