#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *result;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		result[i] = min++;
	return (result);

}
