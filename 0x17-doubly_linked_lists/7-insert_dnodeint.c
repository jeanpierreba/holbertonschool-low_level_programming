#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node at a given position
* @h: head of the doubly linked list
* @idx: index where we want to add the node
* @n: number we want in the new node
* Return: adress of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL, *tmpn = NULL, *tmpp = NULL;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);
	for (tmp = *h; tmp != NULL; counter++)
		tmp = tmp->next;
	if (idx > counter)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	tmpn = *h;

	for (counter = 0; counter < idx; counter++)
	{
		tmpp = tmpn;
		tmpn = tmpn->next;
	}
	new->next = tmpn;
	new->prev = tmpp;
	tmpp->next = new;
	if (tmpn != NULL)
		tmpn->prev = new;

	return (new);
}
