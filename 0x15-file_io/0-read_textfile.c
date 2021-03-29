#include "holberton.h"

/**
* read_textfile - read a text file and prints it
* @filename: name of the file to read
* @letters: numbers of letters it should read and print
* Return: number o letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rdfunc, nletters, readi;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	rdfunc = open(filename, O_RDONLY);
	if (rdfunc < 0)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	readi = read(rdfunc, buffer, letters);
	if (readi < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	close(rdfunc);
	nletters = write(STDOUT_FILENO, buffer, readi);
	if (nletters < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (nletters);
}
