#include "lists.h"

/**
 * *reverse_listint - check the code
 * @head: the pointer
 *
 * Return: popped nide.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nlast = NULL, *pre = NULL;

	if (!head || !*head)
		return (0);

	nlast = *head;
	*head = NULL;
	while (nlast)
	{
		pre = nlast->next;
		nlast->next = *head;
		*head = nlast;
		nlast = pre;
	}
	return (*head);
}
