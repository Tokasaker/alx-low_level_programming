#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 *
 * @n: the no. of args
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int summation = 0;
	va_list lis;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(lis, n);
		for (int counter = 0; counter < n - 1; counter++)
			summation += va_arg(lis, int);
		va_end(lis);
		return (summation);
	}
}
