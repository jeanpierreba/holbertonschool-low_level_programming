#include "holberton.h"

/**
 * _isalpha - check for alphabetic characters
 * Return: 1 if is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
