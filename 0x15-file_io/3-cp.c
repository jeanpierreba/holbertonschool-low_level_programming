#include "holberton.h"

/**
* main - copy the content of a file to another
* @argc: number of argumentes
* @argv: arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int filefr, fileto, readfr, cpto, closefr, closeto;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	filefr = open(argv[1], O_RDONLY);
	if (filefr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((readfr = read(filefr, buffer, 1024)) > 0)
	{
		cpto = write(fileto, buffer, readfr);
		if (cpto != readfr)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (readfr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closefr = close(filefr);
	if (closefr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", filefr), exit(100);
	}
	closeto = close(fileto);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fileto), exit(100);
	}
	return (0);
}
