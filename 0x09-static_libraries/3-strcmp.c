#include "main.h"
#include <stdio.h>

/**
 * _strcmp - contact two strings
 *              using putchar
 *
 * @s1: first string
 * @s2: s string
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
