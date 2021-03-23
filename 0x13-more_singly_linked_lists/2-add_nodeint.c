#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 * @head: pointer to the first element of the linked list
 * @n: data to insert in the new node
 * Return: Pointer to the new node or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
