#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of
 * a linked list
 * @head: pointer to the first element of the linked list
 * @n: data to put in the new element
 * Return: addres of the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *tmp = *head;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newn;

	return (newn);
}
