#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * adv_binary_recursive - searches for a value recursively
 * @array: Pointer to the first element of the array to search
 * @left: Index left
 * @right: Index right
 * @value: Value to search for
 * Return: index of value, -1 if absent
 */
int adv_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i = left;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (adv_binary_recursive(array, left, i, value));
	return (adv_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: index of value, -1 if absent
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (adv_binary_recursive(array, 0, size - 1, value));
}
