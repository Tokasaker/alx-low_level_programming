#include "variadic_functions.h"

/**
 * print_strings - check the code
 *
 * @n: the no. of args
 * @...: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	int counter = n;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lis, n);
	while (counter--)
		printf("%s%s", (string = va_arg(lis, char *)) ? string : "(nil)",
				counter ? (separator ? separator : "") : "\n");
	va_end(lis);
}
