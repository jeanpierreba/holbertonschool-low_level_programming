#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * @f: pointer to functiom
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
		f(name);
}
