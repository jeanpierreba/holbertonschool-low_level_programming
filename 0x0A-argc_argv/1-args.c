#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: pointer to a pointer to a list of
 * command lines arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
