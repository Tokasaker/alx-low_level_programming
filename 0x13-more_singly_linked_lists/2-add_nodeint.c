#include "lists.h"

/**
 * *add_nodeint - check the code
 *
 * @head: the pointer
 * @n: the elemnt
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));

	if (!head || !nnode)
		return (0);

	nnode->n = n;
	nnode->next = NULL;
	if (*head)
		nnode->next = *head;
	*head = nnode;
	return (nnode);
}

