#include "lists.h"

/**
 * sum_listint - check the code
 * @head: the pointer
 *
 * Return: popped nide.
 */
int sum_listint(listint_t *head)
{
	int sumation = 0;

	while (head)
	{
		sumation += head->n;
		head = head->next;
	}
	return (sumation);
}
