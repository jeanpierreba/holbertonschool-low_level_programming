#include "lists.h"

/**
 * sum_listint - sum all of the data
 * @head: pointer to the first element
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sumary = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sumary = sumary + head->n;
		head = head->next;
	}
	return (sumary);
}
