#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * @...: arguments of variadic
 * Return: sum of parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arguments;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
