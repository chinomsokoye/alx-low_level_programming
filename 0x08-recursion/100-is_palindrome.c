#include "main.h"

/**
 * _strlen - returns string length
 * @s: string argument
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + _strlen(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * check_palindrome - checks for palindrome
 * @i: integer
 * @s: string
 * Return: value
 */

int check_palindrome(int i, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen(s) - i])
		{
			return (0);
		}
		return (check_palindrome(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 otherwise
 * @s: character argument
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (check_palindrome(i, s));
}
