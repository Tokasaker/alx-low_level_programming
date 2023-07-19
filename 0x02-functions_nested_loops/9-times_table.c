#include "main.h"

/**
 * times_table - function to check if caharcter is lowercase
 *
 * Description: print hours and minutes of a day
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{
	int table, time, prod;

	for (table = 0; table <= 9; table++)
	{
		_putchar(48);
		for (time = 0; time <= 0; time++)
		{
			_putchar(',');
			_putchar(' ');

			prod = table * time;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
