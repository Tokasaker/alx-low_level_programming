#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - {false or true validation}
 *
 * Return : Always 0 (Success)
*/

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10
	if (d > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (d == 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
