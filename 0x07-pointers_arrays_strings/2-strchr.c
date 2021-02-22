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
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
