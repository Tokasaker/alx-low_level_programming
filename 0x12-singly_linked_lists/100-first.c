#include <stdio.h>

void yoube(void)__attribute__((constructor));

/**
 * yoube - check the code
 *
 * Return: Always 0.
 */
void yoube(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
