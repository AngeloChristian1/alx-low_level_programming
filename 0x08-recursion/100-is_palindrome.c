#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string whose length is to be found
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: pointer to the string to be checked
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return 1;
	}

	if (*s != *(s + len - 1))
	{
		return 0;
	}

	*(s + len - 1) = '\0';

	return is_palindrome(s + 1);
}
