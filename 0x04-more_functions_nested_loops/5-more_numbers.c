#include "holberton.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int f;
	int c;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
				_putchar(c + '0');
		}
		_putchar('\n');
	}
}
