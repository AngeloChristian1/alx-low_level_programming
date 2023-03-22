#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the current function
 * @n: the number of bytes to print
 */
void print_opcodes(int n);

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(n);

	return (0);
}

void print_opcodes(int n)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (int i = 0; i < n; i++)
	{
		printf("%02x", *ptr++);
	}

	printf("\n");
}

