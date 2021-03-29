#include "holberton.h"

/**
* append_text_to_file - appends text to the end of a file
* @filename: file we want to append text
* @text_content: text we want to append
* Return: 1 in succes, -1 in failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int crfunc, wrfunc, i;

	if (file == NULL)
	{
		return (-1);
	}

	crfunc = open(filename, O_WRONLY | O_APPEND);

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
