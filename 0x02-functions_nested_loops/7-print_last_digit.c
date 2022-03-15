#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: integer argument, parameter
 * Return: last digit of number passed
 */

int print_last_digit(int n)
{
	int alpha;

	if (n < 0)
		n = -n;

	alpha = n % 10;

	if (alpha < 0)
		alpha = -alpha;

	_putchar(alpha + '0');

	return (alpha);
}
