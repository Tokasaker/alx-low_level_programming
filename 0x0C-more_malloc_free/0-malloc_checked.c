#include "main.h"

/**
 * *malloc_checked - using malloc to allocate memory
 *
 * @b: the zize of pointer
 *
 * Return: check if the pointer of the array is zero or not.
 */

void *malloc_checked(unsigned int b)
{
	int *h;

	h = malloc(b);

	if (h == 0)
		exit(98);

	return (h);
}
