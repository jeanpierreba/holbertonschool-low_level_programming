#include "holberton.h"

/**
 * print_array - print elements of an array
 * @a: array
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == 0)
		{
		printf("%d", a[c]);
		}
		else
		{
			printf(", %d", a[c]);
		}
	}
	printf("\n");
}
