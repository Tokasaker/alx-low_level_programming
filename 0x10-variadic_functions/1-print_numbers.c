#include "variadic_functions.h"

/**
 * print_numbers - check the code
 *
 * @n: the no. of args
 * @...: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	int counter;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lis, n);
	for (counter = 0; counter < n; counter++)
		printf("%d%s", va_arg(lis, int),
				counter ? (separator ? separator : "") : "\n");
	va_end(lis);
}


