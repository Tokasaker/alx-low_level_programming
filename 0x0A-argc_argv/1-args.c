#include <stdio.h>

/**
 * main - print program name
 * @argv: lis
 * @argc: int
 * Return: 0
 */

int main(int argc, char const **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
