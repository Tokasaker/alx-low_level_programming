#include "main.h"

/**
 * print_most_numbers - check the code
 *			only using _putchar twice
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i >= 0; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
