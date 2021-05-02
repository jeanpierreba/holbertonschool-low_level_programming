#include "lists.h"

/**
* add_dnodeint_end - add a node at the end of the list
* @head: head of the doubly linked list
* @n: number we want in new node
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (tmp = *head; tmp->next;)
		tmp = tmp->next;

	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;
	return (new);
}
