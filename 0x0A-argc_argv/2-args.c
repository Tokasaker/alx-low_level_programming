#include <stdio.h>

/**
 * main - print program name
 * @argv: lis
 * @argc: int
 * Return: 0
 */

int main(int argc, char const **argv)
{
	(void)argc;
	int i;

	for (i = 0; argv != '\0'; i++)
		printf("%s\n", argv[i]);
	return (0);
