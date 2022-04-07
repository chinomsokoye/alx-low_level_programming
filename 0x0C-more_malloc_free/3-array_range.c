#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: value
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	i = min;
	while (i <= max)
	{
		len++;
		i++;
	}
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
