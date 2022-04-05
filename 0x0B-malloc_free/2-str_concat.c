#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *concate;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	concate = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concate == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		concate[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		concate[i + len1] = s2[i];
		i++;
	}
	concate[i + len1] = '\0';
	return (concate);
}
