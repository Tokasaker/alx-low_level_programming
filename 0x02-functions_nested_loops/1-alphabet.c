#include "main.h"

/**
 * print_alphabet - function to check if caharcter is lowercase
 *
 * Description: print alphabet fro a to z
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
