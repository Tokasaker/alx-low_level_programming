#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "print all numbers from 0 to 10"
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}
	putchar('\n');

	return (0);
}

