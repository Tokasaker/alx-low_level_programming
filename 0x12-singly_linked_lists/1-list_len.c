#include "lists.h"

/**
 * list_len - check the code
 *
 * @h: the p
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t lenofe = 0;

	while (h)
	{
		lenofe++;
		h = h->next;
	}
	return (lenofe);
}
