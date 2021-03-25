#include "holberton.h"

/**
* print_binary - prints a number in binary
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	int i = 63, counter = 0;
	unsigned long int base2;

	while (i >= 0)
	{
		base2 = n >> i;

		if (base2 & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter != '\0')
		{
			_putchar('0');
		}
		i--;
	}
	if (counter == '\0')
	{
		_putchar('0');
	}
}
