#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string encoded
 */

char *rot13(char *s)
{
	int i, j;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
