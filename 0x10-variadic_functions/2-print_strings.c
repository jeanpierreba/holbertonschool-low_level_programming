#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: space between words
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list liststr;

	va_start(liststr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(liststr, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			separator = "";
		else if (separator != NULL && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(liststr);
}
