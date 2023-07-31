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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] == s[i]; j++)
		{
			p = &s[i];
			return (p);
		}
	}

	return (0);
}
