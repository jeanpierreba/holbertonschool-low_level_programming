#include "variadic_functions.h"

/**
 * print_all - print everything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";

	va_list printall;

	va_start(printall, format);

	if (format != '\0')
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(printall, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(printall, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(printall, double));
				break;
			case 's':
				string = va_arg(printall, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(printall);
}
