#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of 2 arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: if receive 2 arguments 0, otherwise 1
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
