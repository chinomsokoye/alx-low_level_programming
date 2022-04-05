#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts number of words in string
 * @s: string
 * Return: value
 */

int word_count(char *s)
{
	int elp, c, w;

	elp = 0;
	w = 0;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] == ' ')
			elp = 0;
		else if (elp == 0)
		{
			elp = 1;
			w++;
		}
		c++;
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer
 */

char **strtow(char *str)
{
	char **grid, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *) * (words + 1));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				grid[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
		i++;
	}
	grid[k] = NULL;
	return (grid);
}
