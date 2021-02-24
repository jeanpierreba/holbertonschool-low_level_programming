#include "holberton.h"

/**
 * sqrt_recursion2 - checks for natural numbers
 * @b: same number as n
 * @c: integer that go from 1 to n
 * Return: natural square root of n
 * otherwise -1
 */

int sqrt_recursion2(int b, int c)
{
	if (c * c == b)
	{
		return (c);
	}
	else if (c * c > b)
		return (-1);
	return (sqrt_recursion2(b, c + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of
 * of a given number
 * @n: number
 * Return: natural square root, if n doesn't have
 *natural square root return -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion2(n, 1));
}
