#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0
* @n: number to set the value
* @index: index
* Return: 1 if works, -1 if fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux;

	if (index > 63)
	{
		return (-1);
	}
	aux = 1 << index;
	*n = *n & ~aux;

	return (1);
}
