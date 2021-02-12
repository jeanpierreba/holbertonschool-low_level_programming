#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of diagonal lines
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				for (b = 1; b < a; b++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
