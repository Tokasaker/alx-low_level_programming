#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints buffer in hexa
 * @width: the size of the memory to print
 * @height: the s int
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int j, lenghtof;

	if (width <= 0 || height <= 0)
		return (0);

	lenghtof = width + height;

	int *h = (int *)malloc(sizeof(int) * lenghtof + 1);

	if (h == 0)
		return (0);
	for (j = 0; j < width; j++)
	{
		h[j] = width++;
		h[j] = 0;
	}

	for (; j < lenghtof; j++)
	{
		h[j] = height++;
		h[j] = 0;

	}
	h[j] = '\0';
	return (h);
}




