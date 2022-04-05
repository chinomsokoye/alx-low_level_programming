#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to new alloc memory, contains copy of string given
 * @str: string
 * Return: pointer to newly alloc memory space
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}
	p = malloc(sizeof(char) * c + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < c)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
