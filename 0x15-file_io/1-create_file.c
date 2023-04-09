#include "main.h"

/**
  * create_file - Create a file with read/write access
  * @filename: name of file
  * @text_content: string to write
  *
  * Return: 1 on success, -1 if failure occur
  */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
			;

	if (text_content)
		write(fd, text_content, _i));

	close(fd);
	return (1);
}

