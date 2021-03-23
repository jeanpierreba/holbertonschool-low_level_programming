#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
