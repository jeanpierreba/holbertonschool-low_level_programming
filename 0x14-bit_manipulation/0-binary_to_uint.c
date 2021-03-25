#include "holberton.h"

/**
* binary_to_uint - converts binary number to an unsigned int
* @b: pointer to a string with 0 and 1
* Return: number converted, or 0 if b is NULL or
* if b have more chars that aren't 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int base10 = 0;

	if (b == NULL)
		return (0);

	while (b[i] != 0)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		base10 = 2 * base10 + (b[i] - '0');
		i++;
	}
	return (base10);
}
