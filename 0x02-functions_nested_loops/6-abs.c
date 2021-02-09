#include "holberton.h"

/**
 * _abs - print the entire value of a int
 * @r: value of the integer
 * Return: entire value of r
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (-r);
}
