#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

