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
	int **h;
	int j, k;

	h = malloc(sizeof(*h) * height);

	if (width <= 0 || height <= 0)
		return (0);

	if (h == 0)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < height; j++)
		{
			h[j] = malloc(sizeof(**h) * width);
			if (h[j] == 0)
			{
			while (j--)
				free(h[j]);
			free(h);
			return (0);
			}
		}
		for (k = 0; j < width; j++)
			h[j][k] = 0;
	}
	return (h);
}




