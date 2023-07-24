#include "main.h"

/**
 * print_array - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @a: int paramyer
 * @n: int paramyer
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf('\n');
}

