#include "main.h"

/**
 * print_line - draws a straghit line
 *
 * @n: input to print character _
 *
 * Return: Always 0 (Success).
 */

void print_line(int n)
{
int i = 0;

if (n <= 0)
{
	_putchar('\n');
} else
{

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}

