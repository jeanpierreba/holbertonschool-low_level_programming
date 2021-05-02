#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of the list
* @head: head of the doubly linked list
* @index: node we want to return
* Return: nth node of the list or NULL if it doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	for (tmp = head; tmp != NULL; counter++)
		tmp = tmp->next;

	if (index > (counter - 1))
		return (NULL);

	for (counter = 0; counter < index; counter++)
		head = head->next;

	return (head);
}
