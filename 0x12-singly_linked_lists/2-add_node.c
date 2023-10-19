#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node must be add at the beginning of the linked list
 * @head: double pointer to the list_t list not other list
 * @str: new string to add in the node elegible
 *
 * Return: the address of the new element, if not note null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

