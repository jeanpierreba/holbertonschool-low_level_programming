#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *tmp1 = NULL, *tmp2 = NULL;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	for (tmp = *head; tmp != NULL; counter++)
		tmp = tmp->next;
	if (index > (counter - 1))
		return (-1);

	tmp1 = *head;

	if (index == 0)
	{
		tmp1 = tmp1->next;
		*head = tmp1;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (counter = 0; counter < index; counter++)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}

	tmp2->next = tmp1->next;
	tmp = tmp1->next;
	if (tmp != NULL)
		tmp->prev = tmp2;
	return (1);
}