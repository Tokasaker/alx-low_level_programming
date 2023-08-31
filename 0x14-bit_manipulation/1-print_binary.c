#include "main.h"

/**
 * print_binary - check the code
 * @n: pointer to str
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int el = sizeof(n) * 8, pr = 0;

	while (el)
	{
		if (n & 1L << --el)
		{
			putchar('1');
			pr++;
		}
		else if (pr)
			putchar('0');
	}
	if (!pr)
		putchar('0');
}
