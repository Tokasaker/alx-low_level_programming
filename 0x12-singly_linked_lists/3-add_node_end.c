#include "lists.h"

/**
 * *add_node_end - check the code
 *
 * @head: the p
 * @str: the sting to bea dded
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *glas = *head;
	unsigned int lenofn = 0;

	while (str[lenofn])
		lenofn++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (0);

	nnode->str = strdup(str);
	nnode->len = lenofn;
	nnode->next = 0;

	if (*head == 0)
	{
		*head = nnode;
		return (nnode);
	}

	while (glas->next)
		glas = glas->next;

	glas->next = nnode;

	return (nnode);
}
