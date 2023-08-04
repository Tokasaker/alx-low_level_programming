#include "main.h"

/**
 * _strlen - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @s: int paramyer
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
