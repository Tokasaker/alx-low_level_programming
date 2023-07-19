#include "main.h"

/**
 * print_to_98 - function to check if caharcter is lowercase
 *
 * @n: print count of n
 *
 * Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
