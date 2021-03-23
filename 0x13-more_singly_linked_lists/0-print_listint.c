#include "lists.h"

/**
 * print_listint - print all elementes of a linked list
 * @h: pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnode;

	for (nnode = 0; h != NULL; nnode++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnode);
}
