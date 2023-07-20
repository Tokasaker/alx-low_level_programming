#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *		can use _putchar three times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int table, num, count;

	for (table = 1; table <= 10; table++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
			_putchar(count % 10 + 48);
		}
		_putchar('\n');
	}
}
