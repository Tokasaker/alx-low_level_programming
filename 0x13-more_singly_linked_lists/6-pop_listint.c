#include "lists.h"

/**
 * pop_listint - check the code
 * @head: the pointer
 *
 * Return: popped nide.
 */
int pop_listint(listint_t **head)
{
	listint_t *nlast;
	int el;

	if (!head || !*head)
		return (0);

	nlast = (*head)->next;
	el = (*head)->n;
	free(*head);
	*head = nlast;
	return (el);
}
