#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always 0.
 */

int get_endianness(void)
{
	unsigned long int el = 1;

	return (*(char *)&el);
}
