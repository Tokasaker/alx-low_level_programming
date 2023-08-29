#include "lists.h"

/**
 * *get_nodeint_at_index - check the code
 * @head: the pointer
 * @index: index of el
 *
 * Return: popped nide.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nlast;
	unsigned int el;

	for (nlast = head, el = 0; nlast && el < index; nlast = nlast->next, el++)
		;
	return (nlast);
}
