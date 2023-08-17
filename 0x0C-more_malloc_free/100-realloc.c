#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to the previous
 * @old_size: size of the memory
 * @new_size: new size of the memory
 * Return: pointer to the newly
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *prev_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	prev_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			ptr1[i] = prev_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			ptr1[i] = prev_ptr[i];
	}
	free(ptr);
	return (ptr1);
}
