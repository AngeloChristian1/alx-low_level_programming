#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>5)
	{
		print("%d is greater than 5,n")
	}
	else if (n==0)
	{
		print("%d is equal to zero",n)
	}
	else
	{
		print("%d is less than six and not zero")
	}
	return (0);
}
