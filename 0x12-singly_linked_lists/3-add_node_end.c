#include "lists.h"

/**
* add_node_end - add a node to the end of the linked list
* @head: first node
* @str: string to add to the node
* Return: adress of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *newll, *tmpll = *head;

	for (len = 0; str[len]; len++)
	{}

	newll = malloc(sizeof(list_t));
	if (newll == NULL)
	return (NULL);

	newll->str = strdup(str);
	newll->len = len;
	newll->next = NULL;

	if (*head == NULL)
	{
		*head = newll;
		return (new);
	}

	while (tmpll->next != NULL)
	tmpll = tmpll->next;

	tmpll->next = new;

	return (newll);
}
