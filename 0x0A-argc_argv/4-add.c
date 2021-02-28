#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * number - checks if argument is a digit
 * @s: string
 * Return: 1 if it's a number, 0 otherwise
 */

int number(char *s)
{
	int i, check, dig;

	i = 0, dig = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		dig = isdigit(*(s + i));
		if (dig == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if arguments contain symbols that
 *are not digits, otherwise 0
 */

int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
