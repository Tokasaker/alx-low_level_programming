#include "main.h"

/**
 * *_strcpy - takes a paramter to an int paramter
 *              and updates the value of int to print 98
 *
 * @src: int paramyer
 * @dest: int paramyer
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
