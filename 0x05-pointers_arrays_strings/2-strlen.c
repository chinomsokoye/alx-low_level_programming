#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: character, argument, parameter to return
 * Return: returns length of string character argument
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
