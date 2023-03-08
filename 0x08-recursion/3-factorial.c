#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be found
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
