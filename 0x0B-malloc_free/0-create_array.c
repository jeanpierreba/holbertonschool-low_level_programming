#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char in the array
 * Return: NULL if size is 0, otherwise pointer to
 *the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

		if (array == 0)
		{
			return (NULL);
		}
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	*(array + i) = ('\0');

		return (array);

}
