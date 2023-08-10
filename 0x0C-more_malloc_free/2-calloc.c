#include "main.h"
#include <stdlib.h>

/**
 * *calloc - using malloc to allocate memory
 *
 * @x: the zize of pointer
 * @j: the size of bytes
 * @y: the integer
 *
 * Return: check if the pointer of the array is zero or not.
 */

void *_calloc2(char *j, char x, unsigned int y)
{
	char *o = j;

	while (y--)
		*j++ = x;

	return (o);
}


#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - using malloc to allocate memory
 *
 * @nmemb: the zize of pointer
 * @size: the size of bytes
 *
 * Return: check if the pointer of the array is zero or not.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *h = malloc(sizeof(int) * nmemb);

	if (nmemb == 0 || size == 0)
		return (0);
	if (h == 0)
		return (0);

	void *_calloc(h, (0), sizeof(int) * nmemb);

	return (h);
}

