#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *		can use _putchar three times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int table, num;

	for (table = 1; table <= 10; table++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(1 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
