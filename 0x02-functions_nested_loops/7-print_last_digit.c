#include "holberton.h"

/**
 * print_last_digit - print las digit of a number
 * @n: parameter of the number
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
