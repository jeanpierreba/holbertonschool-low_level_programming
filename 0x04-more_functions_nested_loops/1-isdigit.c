#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: parameter of digits
 * Return: 1 is c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
