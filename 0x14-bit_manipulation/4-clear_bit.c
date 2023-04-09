#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets the value of a bit to 0 at a given index
  * @n: Number to set
  * @index: The index to modify to
  *
  * Return: 1 on success, or -1 if error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int set;

	if (index > 64)
		return (-1);
	set = index;
	for (i = 1; set > 0; i *= 2, set--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
