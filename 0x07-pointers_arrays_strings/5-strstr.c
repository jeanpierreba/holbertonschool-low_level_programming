#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: small string - substring
 * Return: pointer to the beggining of the located substring
 * or NULL if the substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
