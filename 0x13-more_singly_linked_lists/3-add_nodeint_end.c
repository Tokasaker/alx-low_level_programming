#include "lists.h"

/**
 * *add_nodeint_end - check the code
 *
 * @head: the pointer
 * @n: the elemnt
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));
	listint_t *nlast;

	if (!head || !nnode)
		return (0);

	nnode->next = NULL;
	nnode->n = n;
	if (!*head)
		*head = nnode;
	else
	{
		nlast = *head;
		while (nlast->next != NULL)
			nlast = nlast->next;
	nlast->next = nnode;
	}
	return (nnode);
}
