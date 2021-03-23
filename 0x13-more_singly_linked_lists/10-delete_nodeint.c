#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: pointher to the first element
 * @index: index of the node that should be deleted
 * Return: 1 if succes, -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *current = NULL;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (counter = 0; counter < index - 1; counter++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
