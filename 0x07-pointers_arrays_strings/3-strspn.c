#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: number of bytes
 * Return: length of the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, z;

	i = 0;
	f = 0;

	while (s[i] != '\0')
	{
		z = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				z = 1;
			}
		}
		if (z == 0)
		{
			return (f);
		}
		i++;
	}
	return (0);
}
