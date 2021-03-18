#include "lists.h"

/**
* add_node - add a node to the start of the linked list
* @head: first node
* @str: string to add to the node
* Return: adress of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *newll;

	for (len = 0; str[len]; len++)
	{}

	newll = malloc(sizeof(list_t));
	if (newll == NULL)
	return (NULL);

	newll->str = strdup(str);
	newll->len = len;
	newll->next = *head;
	*head = newll;

	return (*head);
}
