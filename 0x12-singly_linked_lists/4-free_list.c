#include "lists.h"

/**
 * free_list - check the code
 *
 * @head: the p
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *glas;

	while (head)
	{
		glas = head->next;
		free(head->str);
		free(head);
		head = glas;
	}
}
