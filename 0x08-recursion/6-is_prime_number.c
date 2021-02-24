#include "holberton.h"

/**
 * prime_number2 - evaluates if it's a prike number
 * @a: n
 * @b: integer that go from 1 to n
 * Return: 1 if the integer is a prime number,
 * 0 otherwise
 */

int prime_number2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_number2(a, b + 1));
}

/**
 * is_prime_number - checks if the integer is a prime number
 * @n: integer
 * Return: return 1 if the input integer is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number2(n, 2));
}
