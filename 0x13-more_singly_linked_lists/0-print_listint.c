#include "lists.h"

/**
 * print_listint - check the code
 *
 * @h: the pointer
 *
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t loop = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		loop++;
	}
	return (loop);

}
