#include "main.h"

/**
 * read_textfile - Read file and print to POSIX stdout
 * @filename: The source file
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, counted;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	counted = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, counted);

	free(buffer);
	close(fd);
	return (counted);
}
