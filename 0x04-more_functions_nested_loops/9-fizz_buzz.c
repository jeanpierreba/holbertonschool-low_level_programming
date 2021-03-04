#include <stdio.h>
#include "holberton.h"

/**
 * main - print numbers form 0 to 100,
 * multiples of 3 print Fizz, multiples of
 * 5 print Buzz and multiples of both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
