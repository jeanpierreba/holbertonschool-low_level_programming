#include "holberton.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: array
 * @size: size of the array
 */


void print_diagsums(int *a, int size)
{
	int i;

	unsigned int num1, num2;

	num1 = 0;
	num2 = 0;

	while (i < size)
	{
		num1 += a[(size * i) + 1];
		num2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", num1, num2);
}
