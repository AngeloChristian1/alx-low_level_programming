#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number.
 *
 * @n: The integer to check.
 *
 * Return: If the number is prime, 1. Otherwise, 0.
 */
int is_prime_number(int n)
{
    int i;

    /* Corner cases */
    if (n <= 1)
        return (0);

    /* Check for divisibility from 2 to sqrt(n) */
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}
