#include "main.h"

/**
 * leet - encodes a string
 * @s: string character
 * Return: pointer to string
 */

char *leet(char *s)
{
	int a, b;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == i[b])

				s[a] = j[b];
		}
	}
	return (s);
}
