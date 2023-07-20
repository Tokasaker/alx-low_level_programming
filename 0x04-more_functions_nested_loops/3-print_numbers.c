/**
 * print_numbers - check the code
 *
 * Description: print numbers from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + '0');
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}


