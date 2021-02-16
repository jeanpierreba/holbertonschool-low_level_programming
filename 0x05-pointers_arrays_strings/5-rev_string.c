#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int a, b, c;
	char ka;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;

	for (b = 0; b < a / 2; b++)
	{
		ka = s[b];
		s[b] = s[c];
		s[c--] = ka;
	}
}
