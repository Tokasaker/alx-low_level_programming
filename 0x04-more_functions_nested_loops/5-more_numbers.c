#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int table, num, count;

	for (table = 0; table <= 9; table++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48)
		}
		_putchar('\n')
	}
}
