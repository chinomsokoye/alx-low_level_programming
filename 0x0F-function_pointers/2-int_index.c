#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for ana iinteger
 * @array: array
 * @size: array size
 * @cmp: pointer
 * Return: value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
