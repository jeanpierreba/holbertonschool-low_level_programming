#include "holberton.h"

/**
 * _strpbrk - searches in a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return:pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int j, i;

	j = 0;

	for (; j != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
