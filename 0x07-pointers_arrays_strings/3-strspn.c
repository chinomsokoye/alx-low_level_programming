#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: byte
 * Return: number of byte in str consisting of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, strbyt;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		strbyt = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				strbyt = 1;
			}
		}
		if (strbyt == 0)
		{
			return (c);
		}
	}
	return (0);
}
