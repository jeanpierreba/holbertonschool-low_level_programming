#include "holberton.h"

/**
* create_file - create a file with read and write permissions
* @filename: name of the file to be created
* @text_content: content of the file
* Return: 1 in succes, -1 in failure
*/

int create_file(const char *filename, char *text_content)
{
	int crfunc, i, wrfunc;

	if (filename == NULL)
	{
		return (-1);
	}

	crfunc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (crfunc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != 0)
		i++;
		wrfunc = write(crfunc, text_content, i);

		if (wrfunc != i)
		{
			return (-1);
		}
	}

	close(crfunc);

	return (1);
}
