#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *phrase = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (phrase);
}
