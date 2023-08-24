#include "lists.h"

/**
 * *add_node - check the code
 *
 * @head: the p
 * @str: the sting to bea dded
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int lenofs = 0;

	while (str[lenofs])
		lenofs++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (0);

	nnode->str = strdup(str);
	nnode->len = lenofs;
	nnode->next = (*head);
	(*head) = nnode;

	return (*head);
}

