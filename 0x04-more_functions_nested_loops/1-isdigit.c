#include "main.h"
#include <stdio.h>
/**
 *
 *Prototype: int _isdigit(int c);
 *Returns 1 if c is a digit
 *Returns 0 otherwise
 *@c: is the digit to be checked
 */

int _isdigit(int c)
{
	if (c <=48 && c>=57)
		return (1);
	return (0);
}
