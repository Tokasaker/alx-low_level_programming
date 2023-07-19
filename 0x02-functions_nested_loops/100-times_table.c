#include "main.h"

/**
 * print_times_table - function to check if caharcter is lowercase
 *
 * @n: print last digit of n
 *
 * Return: Always 0 (Success)
*/

void print_times_table(int n)
{
	int table, time, prod;

	if (n <= 15 && n >= 0)
	{
		for (table = 0; table <= n; ++table)
		{
			_putchar(48);
			for (time = 1; time <= n; ++time)
			{
				_putchar(',');
				_putchar(' ');

				prod = table * time;

				if (prod <= 9)
				       _putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

