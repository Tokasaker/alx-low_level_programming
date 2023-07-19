#include "main.h"

/**
 * prints_alphapet - in lowercase from a to z
 *
 * Description: "print from a to z"
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
