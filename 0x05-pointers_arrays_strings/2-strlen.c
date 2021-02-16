#include "holberton.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int n;

	while (s[n] != '\0')
		n++;

	return (n);
}
