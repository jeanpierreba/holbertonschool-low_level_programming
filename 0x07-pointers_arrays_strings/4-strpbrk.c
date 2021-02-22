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

	while (j != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
}
