#include "lists.h"

/**
 * free_listint - check the code
 *
 * @head: the pointer
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *nlast;

	while (head)
	{
		nlast = head;
		head = head->next;
		free(nlast);
	}
}


