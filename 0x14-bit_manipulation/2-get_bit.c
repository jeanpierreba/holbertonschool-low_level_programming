#include "holberton.h"

/**
* get_bit - get the value of a bit at a given index
* @n: number in base10
* @index: index
* Return: value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
