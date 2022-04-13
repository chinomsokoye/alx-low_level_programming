#include "function_pointers.h"
#include <stddef.h>

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

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(*(array + 1)))
			return (i);
		i++;
	}
	return (-1);
}
