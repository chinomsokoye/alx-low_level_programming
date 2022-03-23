#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: string source
 * @n: integer
 * Return: pointer to string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
