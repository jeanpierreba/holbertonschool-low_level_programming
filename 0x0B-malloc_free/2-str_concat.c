#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a new space in memory of s1 and s2
 * concatenates, returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *phrase;
	int i, j, l1 = 0, l2 = 0;

	while (s1 != '\0' && s1[l1] != '\0')
		l1++;
	while (s2 != '\0' && s2[l2] != '\0')
		l2++;

	phrase = malloc(sizeof(char) * (l1 + l2 + 1));
	if (phrase == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1 != '\0')
	{
		while (i < l1)
		{
			phrase[i] = s1[i];
			i++;
		}
	}
	if (s2 != '\0')
	{
		while (j < (l1 + l2))
		{
			phrase[i] = s2[j];
			i++;
			j++;
		}
	}
	phrase[i] = '\0';

	return (phrase);
}
