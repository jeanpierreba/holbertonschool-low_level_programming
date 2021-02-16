#include "holberton.h"

int _strlen(char *s)
{
	int n;

	while (s[n] != '\0')
		n++;

	return (n);
}
