#include "lists.h"

/**
* list_len - return the number of elements in a linked list
* @h: pointer to the linked list
* Return: number of elements in *h
*/

size_t list_len(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
