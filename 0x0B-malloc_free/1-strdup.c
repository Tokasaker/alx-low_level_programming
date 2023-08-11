#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int x = 0, z = 0;
	char *i = malloc(sizeof(*str) + 1);

	if (str == 0)
		return (0);
	for (; str[z] != '\0'; z++)
	;

	if (i == 0)
	{
		return (0);
	}
	else
	{
		for (; x < z; x++)
			i[x] = str[x];

	}
	return (i);
}



