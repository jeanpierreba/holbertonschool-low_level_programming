#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: parameter of the number
 * Return: 1 if number is positive, 0 if is 0
 * -1 if is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
	return (0);
	}
	else
		_putchar(45);
	return (-1);
}
