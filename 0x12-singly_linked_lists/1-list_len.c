#include <stdlib.h>
#include "lists.h"

/**
 * list_len -the number of elements in a linked list tur it
 * @h: pointer to the list_t in list must be
 *
 * Return: number of elements in h mention it
 */
size_t list_len(const list_t *i)
{
	size_t n = 0;

	while (i)
	{
		n++;
		i = i->next;
	}
	return (n);
}

