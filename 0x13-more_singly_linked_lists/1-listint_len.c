#include "lists.h"

/**
 * listint_len - count the number of elementes
 * @h: pointer to the linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nnode;

	while (h != NULL)
	{
		h = h->next;
		nnode++;
	}
	return (nnode);
}
