#include "main.h"

/**
 * print_numbers - check the code
 *		only using _putchar twice
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
int i = 0;

do {
	_putchar(i + 48);
	i++;
} while (i >= 0 && i <= 9);
_putchar('\n');
}


