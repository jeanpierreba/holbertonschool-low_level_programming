#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: number of lines
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
