#include "holberton.h"

/**
 * print_array - print elements of an array
 * @a: array
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		if (n == 0)
		{
		printf("%d", a[n]);
		}
		else
		{
			printf(", %d", a[n]);
		}
	}
	printf("\n");
}
