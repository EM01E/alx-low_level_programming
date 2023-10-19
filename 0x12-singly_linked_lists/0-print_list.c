#include <stdio.h>
#include "lists.h"

/**
 * print_list - must prints all elements of the linked list that we need
 * @h: pointer to the list_t list to print in
 *
 * Return: the number of nodes printed must be mentioned in the return
 */
size_t print_list(const list_t *i)
{
	size_t s = 0;

	while (i)
	{
		if (!i->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", i->len, i->str);
		i = i->next;
		s++;
	}

	return (s);
}

