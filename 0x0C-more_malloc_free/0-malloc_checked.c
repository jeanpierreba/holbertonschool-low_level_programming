#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of the memory to allocate
 * Return: pointer to the allocated memory,
 * if malloc fails return 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		return (98);

	return (p);
}
