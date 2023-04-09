#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number to flip to
 * @m: second number to flip to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	diff = n ^ m;
	count = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
