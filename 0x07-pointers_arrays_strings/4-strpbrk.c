#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: byte string
 * Return: pointer to the byte, NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
