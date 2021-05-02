#include "lists.h"

/**
* dlistint_len - count the number of nodes
* @h: head of the doubly linked list
* Return: number of elements in the linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter;

	for (counter = 0; h; counter++)
		h = h->next;

	return (counter);
}
