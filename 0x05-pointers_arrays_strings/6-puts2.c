#include "main.h"

/**
 * puts2 - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @str: int paramyer
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
