#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the first element
 * @idx: index of the list where the new node should be added
 * @n: data to insert
 * Return: pointer to the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newn, *tmp = *head;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL || head == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			newn->next = tmp->next;
			tmp->next = newn;
			return (newn);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
