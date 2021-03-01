#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command lines arguments
 * @argv: array containing the program line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
