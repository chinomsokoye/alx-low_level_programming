#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: index location of value, -1 if absent
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, stop, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	start = 0, stop = step;

	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       start, array[start]);
		if (stop < size)
		{
			if (array[start] <= value && value <= array[stop])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, stop);
				break;
			}
		} else
		{
			if (array[start] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, stop);
				break;
			}
		}
		start = stop;
		stop = start + step;
	}
	while (start <= stop)
	{
		if (start <= stop)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
