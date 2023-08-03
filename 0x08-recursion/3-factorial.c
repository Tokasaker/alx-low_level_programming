#include "main.h"

/**
 * factorial - print reverse string
 *
 * @n: the array
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < -1)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
