#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * @s: the array
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		printf("%d", s[i]);
	printf("\n");
}
