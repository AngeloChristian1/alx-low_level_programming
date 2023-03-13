#include "main.h"

/*
 * _strdup(char *str): returns a pointer to a newly allocated space in memory
 * @str: The striing to be passed int the function
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *s;
	if (str == NULL)
		return (NULL);
	int a;
	for (a = 0; a != '\0'; a++)
		;
	s = malloc(a * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a != '\0'; a++)
		s[a] = str[a];
	s[a] = '\0';
	return (s);
}
