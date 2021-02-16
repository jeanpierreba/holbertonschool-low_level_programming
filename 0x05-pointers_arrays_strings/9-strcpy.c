#include "holberton.h"

/**
 * *_strcpy - copy the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: destination of the string
 * @src: source of the string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (n = 0; n < i; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
