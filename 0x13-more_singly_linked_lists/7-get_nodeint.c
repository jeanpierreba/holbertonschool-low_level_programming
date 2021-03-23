#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node
 * @head: pointer to the first element
 * @index: index to find in list
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (0);

	for (counter = 0; counter < index; counter++)
	{
		if (head == NULL)
			return (0);
		head = head->next;
	}
	return (head);
}
