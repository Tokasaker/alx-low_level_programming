#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - check the code
 * @b: the zize of pointer
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *h = malloc(sizeof(b));

	if (h == 0)
		exit(98);

	return (h);
}
