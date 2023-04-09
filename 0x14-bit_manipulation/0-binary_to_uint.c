#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer pointing to a string
 * Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, res = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			res += pow;
	}

	return (res);
}
