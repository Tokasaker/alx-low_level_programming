#include "main.h"
#include <stdio.h>

/**
 * islower - contact two strings
 *              using putchar
 * @c: f string
 *
 * Return: Always 0.
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - contact two strings
 *              using putchar
 *
 * @c: f string
 *
 * Return: Always 0.
 */

int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}


/**
 * *cap_string - contact two strings
 *              using putchar
 *
 * @s: s string
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	char *ptr = s;

	int foundDelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
