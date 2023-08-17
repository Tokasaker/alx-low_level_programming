#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 *
 * @n: the no. of args
 * @...: the last no. of args
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int summation = 0;
	va_list lis;

	if (n == 0)
		return (0);
	va_start(lis, n);
	for (counter = 0; counter < n; counter++)
			summation += va_arg(lis, unsigned int);

	va_end(lis);
	return (summation);
}
