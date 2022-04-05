#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all argument of a program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated value
 */

char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	size += (ac + 1);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		i++;
		k++;
	}
	s[k] = '\0';
	return (s);
}
