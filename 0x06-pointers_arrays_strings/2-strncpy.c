#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - contact two strings
 *              using putchar
 *
 * @dest: first string
 * @src: s string
 * @n: third input
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
