#include <stdlib.h>
#include "main.h"

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

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
