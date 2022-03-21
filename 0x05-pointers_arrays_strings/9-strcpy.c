#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies string pointed to src, pointed to dest
 * @dest: destination
 * @src: source
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
