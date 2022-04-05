#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
		len++, s++;
	return (len);
}

/**
 * argstostr - concatenates all argument of a program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated value
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len += _strlen(av[i]);
		i++;
	}
	len += (ac + 1);
	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < _strlen(av[i]))
		{
			s[k++] = av[i][j];
			j++;
		}
		s[k++] = '\n';
		i++;
	}
	return (s);
}
