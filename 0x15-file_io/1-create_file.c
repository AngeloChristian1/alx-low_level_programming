#include "main.h"
/**
 * create_file - creates a file with read and write settings
 * @filename: name of file
 * @text_content: string to add
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;
	long int wrote;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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

