#include "main.h"
#include <stdio.h>
/*
 * str_concat(char *s1, char *s2)- concatenate two strings
 * @s1:The first string to concatenate
 * @s2:The second string to concatenate
 * return NULL for failure
 * */

char *str_concat(char *s1, char *s2)
{
	char *a ;
	int i, x;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	for (i = 0; i != '\0'; i++)
		;
	for  (x =0; x!= '\0'; x++)
		;
	a = malloc ((i * sizeof(char) + (x * sizeof(char)) + 1);
	if (a == NULL)
		return (NULL);
	
	int y, z;
	for (y = 0, z = 0; y < (i + x + 1); y++)
	{
		if (y < i)
			a[y] = s1[y];
		else
			a[y] = s2[z++];
	}

	return (a);
}

