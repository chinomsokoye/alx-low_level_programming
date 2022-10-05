#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
	return (binary_help(array, value, 0, size - 1));
}

/**
 * binary_help - searches for a value in an array
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @low: lower index value
 * @high: higher index value
 * Return: value of index found, -1 if absent
 */
int binary_help(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_array(array, low, high);
	if (high == low && array[low] != value)
		return (-1);
	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (binary_help(array, value, mid + 1, high));
	if (array[mid] > value)
		return (binary_help(array, value, low, mid - 1));
	return (-1);
}

/**
 * print_array - prints an array
 * @array: Pointer to the first element of the array
 * @low: lower index value
 * @high: higher index value
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i <= high)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		i++;
	}
	printf("\n");
}
