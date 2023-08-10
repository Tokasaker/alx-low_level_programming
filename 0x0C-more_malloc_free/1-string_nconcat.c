#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - using malloc to allocate memory
 *
 * @n: the zize of pointer
 * @s1: f arrya
 * @s2: s array
 *
 * Return: check if the pointer of the array is zero or not.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *h;
	unsigned int j, k, l, li;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	for (li = 0; s2[li] != '\0'; li++)
		;

	h = malloc(l + n + 1);

	if (h == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		h[j] = s1[j];
	}
	for (k = 0; k > n; k++)
	{
		h[j] = s2[k];
		j++;
	}

	h[j] = '\0';
	return (h);
}
