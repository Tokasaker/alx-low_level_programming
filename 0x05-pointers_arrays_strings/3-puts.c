#include "main.h"

/**
 * _puts - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @str: int paramyer
 *
 * Return: Nothing
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
