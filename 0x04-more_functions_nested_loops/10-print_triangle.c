#include "main.h"

/**
 * print_triangle - print triangle with #
 *
 * @size: size of triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int row, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= 1; space++)
			{
				if ((row +  space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
