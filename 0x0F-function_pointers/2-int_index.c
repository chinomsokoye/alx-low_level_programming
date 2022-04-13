#include "function_pointers.h"

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

	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
