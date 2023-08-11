#include "main.h"
#include <stdlib.h>

/**
 * *array_range - using malloc to allocate memory
 *
 * @min: the zize of pointer
 * @max: the s int
 *
 * Return: check if the pointer of the array is zero or not.
 */

int *array_range(int min, int max)
{
	int *h;
	int lengthbet, j;

	if (min > max)
		return (0);
	lengthbet = max - min + 1;

	h = malloc(sizeof(int) * lengthbet);
	if (h == 0)
		return (0);

	for (j = 0; j < lengthbet; j++)
		h[j] = min++;

	return (h);
}




