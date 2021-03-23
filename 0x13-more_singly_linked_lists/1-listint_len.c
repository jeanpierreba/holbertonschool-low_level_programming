#include "lists.h"

/**
 * listint_len - count the number of elementes
 * @h: pointer to the linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nnode;

	for (nnode = 0; h != NULL; nnode++)
	{
		h = h->next;
	}
	return (nnode);
}
