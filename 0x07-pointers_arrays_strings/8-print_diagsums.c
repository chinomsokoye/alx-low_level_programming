#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonal of square matrix of integers
 * @a: arrays
 * @size: diagonal array size
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int diagsum1, diagsum2;

	diagsum1 = 0;
	diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[(size * i) + i];
		diagsum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
