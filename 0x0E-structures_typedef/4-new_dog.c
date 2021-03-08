#include "dog.h"
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

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: 1 on succes
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (0);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
