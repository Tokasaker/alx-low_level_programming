#include <stdio.h>

/**
 * main - print program name
 * @argv: lis
 * @argc: int
 * Return: 0
 */

int main(int argc, char const **argv)
{
	int z;

	if (argc == 3)
	{
		z = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", z)
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

