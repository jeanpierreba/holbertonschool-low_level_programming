#include "lists.h"

/**
* print_dlistint - print a doubly linked list
* @h: head of the doubly linked list
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int counter;

	for (counter = 0; h; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
