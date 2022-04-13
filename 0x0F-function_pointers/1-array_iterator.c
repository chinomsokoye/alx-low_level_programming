#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as parameter on each element of an
 * array
 * @array: array
 * @size: array size
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && action == NULL)
		exit(98);
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
