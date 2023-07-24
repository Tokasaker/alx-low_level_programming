#include "main.h"

/**
 * puts_half - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @str: int paramyer
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
