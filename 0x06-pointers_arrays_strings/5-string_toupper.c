#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - contact two strings
 *              using putchar
 *
 * @str: s string
 *
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int c;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32
		}
	}
	return (str);
}
