#include "main.h"

/**
 * main - function to copy
 * @argc: argument count
 * @argv: argument vector
 * Return: ...
 */
int main(int argc, char **argv)
{
	int fdFrum, fdToo, wrote, readed;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrum = open(argv[1], O_RDONLY);
	if (fdFrum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdToo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdToo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((readed = read(fdFrum, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, readed);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdFrum) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrum);
		exit(100);
	}
	if (close(fdToo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdToo);
		exit(100);
	}
	return (0);
}

