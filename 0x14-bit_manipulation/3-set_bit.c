#include "main.h"


/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number passed by pointer
 * @index: position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
