#include "main.h"

/**
 * *_strchr - prints buffer in hexa
 *
 * @s: the size of the memory to print
 * @c: the numbers
 *
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; src[i] >= '\0'; i++)
	{
		if (src[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
