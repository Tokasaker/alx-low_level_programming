#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9
 *		from 2 and 4 and you can
 *		only using _putchar twice
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
