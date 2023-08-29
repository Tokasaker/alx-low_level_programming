#include "lists.h"

/**
 * pop_listint - check the code
 * @head: the pointer
 *
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *nlast;
	int el;

	if (!head || !nlast)
		return (0);

	nlast = (*head)->next;
	el = (*head)->n;
	free(*head);
	*head = nlast;
	return (el);
}
