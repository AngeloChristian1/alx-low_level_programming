include "main.h"
/**
 * reverse_array: reverses the content of an array of integers
 * @n:  is the number of elements of the array
 */
void reverse_array(int *a, int n)
{

	for (n = 0; a[n] != '\0'; n++)
		;
	int *b[n], i;
	
	for (; n != '\0'; n--)
	{
		b[i] = a[n];
		i ++;
	}
	b[i] = '\0';
	return (b);

