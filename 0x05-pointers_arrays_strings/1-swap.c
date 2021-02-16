#include "holberton.h"

/**
 * swap_int - swaps values of a and b
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
