#include "main.h"

/**
 * *_strpbrk - prints buffer in hexa
 *
 * @s: the size of the memory to print
 * @accept: the numbers
 *
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++
		}
		i++
	}

	return (0);
}
