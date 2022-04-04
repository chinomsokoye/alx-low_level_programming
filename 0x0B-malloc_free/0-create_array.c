#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - creates array of chars, initialize with specific char
 * @size: array size
 * @c: character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
