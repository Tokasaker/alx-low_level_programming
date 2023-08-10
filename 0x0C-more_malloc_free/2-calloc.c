#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - using malloc to allocate memory
 *
 * @nmemb: the zize of pointer
 * @size: the size of bytes
 *
 * Return: check if the pointer of the array is zero or not.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *h = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (0);
	if (h == 0)
		return (0);
}

