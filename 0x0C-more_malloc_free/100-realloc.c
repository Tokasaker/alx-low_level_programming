#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - using malloc to allocate memory
 *
 * @ptr: the zize of pointer
 * @old_size: the old size of array in bytes
 * @new_size: the nes\w size of array in bytes
 *
 * Return: check if the pointer of the array is zero or not.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
