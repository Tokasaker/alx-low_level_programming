#include "lists.h"

/**
 * listint_len - check the code
 *
 * @h: the pointer
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}
