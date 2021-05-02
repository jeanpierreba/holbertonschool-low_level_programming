#include "lists.h"

/**
* sum_dlistint - sum all the data of a doubly linked list
* @head: head of the doubly linked list
* Return: sum of all data or 0 if it's empty
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int result = 0;

	for (; head != NULL;)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
