#include <stdio.h>

/**
 * main - print program name
 * @argv: lis
 * @argc: int
 * Return: 0
 */

int main(int argc, char const **argv)
{
	int i, x, z = 1, 2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		z = atoi(argv[i]) * atoi(argv[x]);
		printf("%d\n", z);
	}
	return (0);
}

