#include "main.h"

/**
 * print_rev - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @s: int paramyer
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putcahr('\n');
}

