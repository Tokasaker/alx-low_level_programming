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

	if (h->next != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
