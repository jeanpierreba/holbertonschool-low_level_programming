#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%i", va_arg(numbers, int));
		else if (separator != NULL && i == 0)
			printf("%i", va_arg(numbers, int));
		else
			printf("%s%i", separator, va_arg(numbers, int));
	}

	printf("\n");
	va_end(numbers);
}
