#include "holberton.h"
#include <stdlib.h>

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

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of the array
 * @size: size
 * Return: pointer to allocate memory, if fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
