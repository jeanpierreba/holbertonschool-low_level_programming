#include<stdio.h>

/**
 * main - print the size of each variable
 * Return: 0
 */

int main(void)

{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(doubleType));
	printf("Size of a float: %zu byte\n", sizeof(floatType));

	return (0);
}
