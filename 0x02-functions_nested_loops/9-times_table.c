#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int v, h, x;

	for (v = 0; v < 10; v++)
	{
		for (h = 0; h < 10; h++)
		{
		x = v * h;
		if (h == 0)
		{
			_putchar(x + '0');
		}
		if (x < 10 && h != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(x + '0');
		}
		else if (x >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		}
		_putchar('\n');
	}
}
