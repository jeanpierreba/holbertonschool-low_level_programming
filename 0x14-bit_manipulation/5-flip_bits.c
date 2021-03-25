#include "holberton.h"

/**
* flip_bits - count the number of bits needed to flip to
* get from one number to the other
* @n: first number
* @m: second number
* Return: number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux, counter = 0;

	aux = n ^ m;

	while (aux != 0)
	{
		counter = counter + (aux & 1);
		aux = aux >> 1;
	}
	return (counter);
}
