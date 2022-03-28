#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurrence of character c in string s, NULL else
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
