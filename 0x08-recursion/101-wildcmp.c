#include "main.h"

/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 * @wc: wildcard
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2, char *wc)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (_strcmp(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (_strcmp(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (_strcmp(s1 + 1, s2 + 1, wc));
	}
	else
	{
		return (_strcmp(s1 + 1, wc, wc));
	}
}

/**
 * wildcmp - compares two strings, 1 if identical, 0 otherwise
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (_strcmp(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}
