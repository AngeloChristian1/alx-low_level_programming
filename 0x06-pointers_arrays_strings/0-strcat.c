#include angelo.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i,c;
	for (i = 0; src[i] != '\0'; i++)
		;
	for (c = 0; src[i] != '\0'; i++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
