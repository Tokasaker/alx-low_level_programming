#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program name
 * @argv: lis
 * @argc: int
 * Return: 0
 */

int main(int argc, char **argv)
{
	int z = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
				return (printf("Error\n"), 1);
		z += atoi(argv[argc]);
	}
	printf("%d\n", z);
	return (0);
}
