#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer array
 * @n: array elements, integers
 */

void reverse_array(int *a, int n)
{
	int j, k, rev;

	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		rev = a[j];
		a[j] = a[k];
		a[k--] = rev;
	}
}
