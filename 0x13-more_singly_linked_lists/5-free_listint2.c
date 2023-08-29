#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: the pointer
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *nlast, *glas;

	if (!head)
		return;
	nlast = *head;
	while (nlast)
	{
		glas = nlast;
		nlast = nlast->next;
		free(glas);
	}
	*head = NULL;
}
