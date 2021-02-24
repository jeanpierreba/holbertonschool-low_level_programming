#include "holberton.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
