#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of arguments
 * Return: resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
