#include "main.h"

/**
 * *malloc_checked - using malloc to allocate memory
 *
 * @b: the zize of pointer
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *h = malloc(b);

	if (h == 0)
		exit(98);

	return (h);
}
