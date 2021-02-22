#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory are
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
