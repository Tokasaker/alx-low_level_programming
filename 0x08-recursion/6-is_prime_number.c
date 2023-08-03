#include "main.h"

/**
 * is_prime_number - print reverse string
 *
 * @n: the array
 * @on: the s
 *
 * Return: Always 0.
 */

checkpr(int n, int on);
int is_prime_number(int n)
{
	return (checkpr(n, 2));
}

/**
 * checkpr - print reverse string
 *
 * @n: the array
 * @on: the s
 *
 * Return: Always 0.
 */

int checkpr(int n, int on)
{

if (on >= n && n > 1)
	return (1);
else if (n % on == 0 || n <= 1)
	return (0);
else
	return (checkpr(n, on + 1));
}

