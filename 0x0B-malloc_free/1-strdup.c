#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string and allocate in a new space
 * in memory
 * @str: string we want to copy
 * Return: NULL if str = NULL, otherwise pointer to the duplicated
 * string
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*(str + i))
	{
		i++;
	}

	array = malloc(sizeof(char) * i + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		*(array + j) = *(str + j);
	}
	return (array);
}
