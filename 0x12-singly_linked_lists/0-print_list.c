#include "lists.h"

/**
* print_list - print all elements of a linked list
* @h: pointer to the linked list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int nnode = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] %s\n", "(nil)");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nnode++;
	}

	return (nnode);
}
