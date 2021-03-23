#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 * Return: Head's node data or 0 if linkes list
 * is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numd;

	if (*head == NULL || head == NULL)
		return (0);

	numd = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numd);
}
