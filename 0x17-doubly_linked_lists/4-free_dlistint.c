#include "lists.h"

/**
* free_dlistint - free a dlistint list
* @head: head of the doubly linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
