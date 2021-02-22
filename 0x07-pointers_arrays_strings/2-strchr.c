#include "holberton.h"

/**
 *_strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c in
 * string s, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;

	while (s[i] != 0)
	{
		if (s[i] != c && s[i] == '\0')
		{
			return (NULL);
		}
		if (s[i] == c)
		{
			break;
		}
		i++;
	}

	j = 0;

	while (j < i)
	{
		s++;
		j++;
	}
	return (s);
}
