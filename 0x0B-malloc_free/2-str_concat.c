#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - prints buffer in hexa
 * @s1: the size of the memory to print
 * @s2: the s int
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *h;
	int j, k, l, li;

	if (s1 == 0)
		return ("");

	if (s2 == 0)
		return ("");
	for (l = 0; s1[l] != '\0'; l++)
		;
	for (li = 0; s2[li] != '\0'; li++)
		;

	h = malloc(sizeof(char) * li + l + 1);

	if (h == 0)
		return (0);

	for (j = 0; s1[j] != '\0'; j++)
		h[j] = s1[j];

	for (k = 0; s2[k] != '\0'; k++)
	{
		h[j] = s2[k];
		j++;
	}
	return (h);
}


