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
		putchar('%d', n);
		n++;
	}
	putchar('\n');

	return (0);
}
