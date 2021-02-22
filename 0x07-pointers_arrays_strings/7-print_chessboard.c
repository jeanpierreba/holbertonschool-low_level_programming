#include "holberton.h"

/**
 * print_chessboard - print the chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\0');
		i++;
	}
}
