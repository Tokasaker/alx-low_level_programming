#include "main.h"

/**
 * print_diagsums - prints buffer in hexa
 *
 * @a: the size of the memory to print
 * @size: the numbers
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, c1 = 0, c2 = 0;

	for (i = 0; i < size; i++)
	{
		c1 += a[i];
		c2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
