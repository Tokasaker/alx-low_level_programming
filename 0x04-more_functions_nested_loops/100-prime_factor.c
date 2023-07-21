#include<stdio.h>
#include<math.h>

/**
 * squareRoot - check the code
 *                      print factor of num
 * @a: input for square root
 *
 * Return: square root of x.
 */

double squareRoot(double a)
{
	double i = 0;

	double j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}
	return (j);
}

/**
 * largest_prime_factor - check the code
 *			print factor of num
 * @i: input for prime number
 *
 * Return: Always 0.
 */

void largest_prime_factor(long int i)
{
	int prmn, largest;

	while (i % 2 == 0)
		i = i / 2;

	for (prmn = 3; prmn <= squareRoot(i); prmn += 2)
	{
		while (i % prmn == 0)
		{
			i = i / prmn;
			largest = prmn;
		}
	}

	if (i > 2)
	{
		largest = i;
	}
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
