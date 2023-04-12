#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: the file name
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;
	long int wrote;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;

		wrote = write(fd, text_content, count);
		if (wrote == -1)
		{
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
